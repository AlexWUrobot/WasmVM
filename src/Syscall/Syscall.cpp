/*
Copyright Luis Hsu

Licensed under the Apache License, Version 2.0 (the "License");you may not use this file except in compliance with the License.
You may obtain a copy of the License at

http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and limitations under the License.
*/

#include <Syscall.h>

std::map<std::string, ModuleInst *>* Syscall::moduleInsts = nullptr;
void Syscall::setModuleInsts(std::map<std::string, ModuleInst *> *moduleInsts){
	Syscall::moduleInsts = moduleInsts;
}

void Syscall::handle(Store &store, Stack &coreStack){
	// Check value count
	if(coreStack.valueNum < 1){
		throw Exception("[unreachable] No value in the stack.", coreStack);
	}
	// Pop operand
	Value *operand = (Value *)coreStack.pop().data;
	if(operand->type != i32){
		throw Exception("[unreachable] Operand type is not i32.", coreStack);
	}
	// Call
	switch(operand->data.i32){

	}
	// Clean
	delete operand;
}