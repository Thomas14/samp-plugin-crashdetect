// Copyright (c) 2011 Zeex
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#ifndef CTRL_C_H
#define CTRL_C_H

class ControlC {
public:
	typedef void (*Handler)();

	static Handler GetHandler();
	static void SetHandler(Handler handler);

private:
	static Handler handler_;
};

#endif // !CTRL_C_H
