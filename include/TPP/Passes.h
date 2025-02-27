//===- TppPasses.h ----------------------------------------------*- C++ -*-===//
//
// Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//===----------------------------------------------------------------------===//

#ifndef TPP_PASSES_H
#define TPP_PASSES_H

#include "mlir/Pass/Pass.h"

namespace mlir {
class ModuleOp;

namespace func {
class FuncOp;
class FuncDialect;
} // namespace func

namespace bufferization {
class BufferizationDialect;
} // namespace bufferization

namespace math {
class MathDialect;
} // namespace math

namespace arith {
class ArithDialect;
} // namespace arith

namespace vector {
class VectorDialect;
} // namespace vector

namespace linalg {
class LinalgDialect;
} // namespace linalg

namespace scf {
class SCFDialect;
} // namespace scf

namespace tensor {
class TensorDialect;
} // namespace tensor

namespace memref {
class MemRefDialect;
} // namespace memref

namespace xsmm {
class XsmmDialect;
} // namespace xsmm

namespace vnni {
class VNNIDialect;
} // namespace vnni

namespace LLVM {
class LLVMDialect;
} // namespace LLVM

namespace math {
class MathDialect;
} // namespace math

namespace tensor {
class TensorDialect;
} // namespace tensor

namespace gpu {
class GPUModuleOp;
class GPUDialect;
} // namespace gpu

namespace spirv {
class SPIRVDialect;
} // namespace spirv

namespace tpp {
class TppDialect;

// Testing passes.
void registerTestStructuralMatchers();
void registerTestForToForAllRewrite();

} // namespace tpp

} // namespace mlir

namespace mlir {
namespace tpp {
// TODO: This should be per-pass so that pass can live
// in their namespace (xsmm, check...). All the passes
// are now in tpp.
#define GEN_PASS_DECL
#include "TPP/Passes.h.inc"

#define GEN_PASS_REGISTRATION
#include "TPP/Passes.h.inc"
} // namespace tpp
} // namespace mlir

#endif // TPP_PASSES_H
