#include "raylib.h"

__attribute__((visibility("default")))
void raylib_InitWindow(int width, int height, const char * title) {
    InitWindow(width, height, title);
}

__attribute__((visibility("default")))
void raylib_CloseWindow(void) {
    CloseWindow();
}

__attribute__((visibility("default")))
_Bool raylib_WindowShouldClose(void) {
    return WindowShouldClose();
}

__attribute__((visibility("default")))
_Bool raylib_IsWindowReady(void) {
    return IsWindowReady();
}

__attribute__((visibility("default")))
_Bool raylib_IsWindowFullscreen(void) {
    return IsWindowFullscreen();
}

__attribute__((visibility("default")))
_Bool raylib_IsWindowHidden(void) {
    return IsWindowHidden();
}

__attribute__((visibility("default")))
_Bool raylib_IsWindowMinimized(void) {
    return IsWindowMinimized();
}

__attribute__((visibility("default")))
_Bool raylib_IsWindowMaximized(void) {
    return IsWindowMaximized();
}

__attribute__((visibility("default")))
_Bool raylib_IsWindowFocused(void) {
    return IsWindowFocused();
}

__attribute__((visibility("default")))
_Bool raylib_IsWindowResized(void) {
    return IsWindowResized();
}

__attribute__((visibility("default")))
_Bool raylib_IsWindowState(unsigned int flag) {
    return IsWindowState(flag);
}

__attribute__((visibility("default")))
void raylib_SetWindowState(unsigned int flags) {
    SetWindowState(flags);
}

__attribute__((visibility("default")))
void raylib_ClearWindowState(unsigned int flags) {
    ClearWindowState(flags);
}

__attribute__((visibility("default")))
void raylib_ToggleFullscreen(void) {
    ToggleFullscreen();
}

__attribute__((visibility("default")))
void raylib_ToggleBorderlessWindowed(void) {
    ToggleBorderlessWindowed();
}

__attribute__((visibility("default")))
void raylib_MaximizeWindow(void) {
    MaximizeWindow();
}

__attribute__((visibility("default")))
void raylib_MinimizeWindow(void) {
    MinimizeWindow();
}

__attribute__((visibility("default")))
void raylib_RestoreWindow(void) {
    RestoreWindow();
}

__attribute__((visibility("default")))
void raylib_SetWindowIcon(Image image) {
    SetWindowIcon(image);
}

__attribute__((visibility("default")))
void raylib_SetWindowIcons(Image * images, int count) {
    SetWindowIcons(images, count);
}

__attribute__((visibility("default")))
void raylib_SetWindowTitle(const char * title) {
    SetWindowTitle(title);
}

__attribute__((visibility("default")))
void raylib_SetWindowPosition(int x, int y) {
    SetWindowPosition(x, y);
}

__attribute__((visibility("default")))
void raylib_SetWindowMonitor(int monitor) {
    SetWindowMonitor(monitor);
}

__attribute__((visibility("default")))
void raylib_SetWindowMinSize(int width, int height) {
    SetWindowMinSize(width, height);
}

__attribute__((visibility("default")))
void raylib_SetWindowMaxSize(int width, int height) {
    SetWindowMaxSize(width, height);
}

__attribute__((visibility("default")))
void raylib_SetWindowSize(int width, int height) {
    SetWindowSize(width, height);
}

__attribute__((visibility("default")))
void raylib_SetWindowOpacity(float opacity) {
    SetWindowOpacity(opacity);
}

__attribute__((visibility("default")))
void raylib_SetWindowFocused(void) {
    SetWindowFocused();
}

__attribute__((visibility("default")))
void * raylib_GetWindowHandle(void) {
    return GetWindowHandle();
}

__attribute__((visibility("default")))
int raylib_GetScreenWidth(void) {
    return GetScreenWidth();
}

__attribute__((visibility("default")))
int raylib_GetScreenHeight(void) {
    return GetScreenHeight();
}

__attribute__((visibility("default")))
int raylib_GetRenderWidth(void) {
    return GetRenderWidth();
}

__attribute__((visibility("default")))
int raylib_GetRenderHeight(void) {
    return GetRenderHeight();
}

__attribute__((visibility("default")))
int raylib_GetMonitorCount(void) {
    return GetMonitorCount();
}

__attribute__((visibility("default")))
int raylib_GetCurrentMonitor(void) {
    return GetCurrentMonitor();
}

__attribute__((visibility("default")))
Vector2 raylib_GetMonitorPosition(int monitor) {
    return GetMonitorPosition(monitor);
}

__attribute__((visibility("default")))
int raylib_GetMonitorWidth(int monitor) {
    return GetMonitorWidth(monitor);
}

__attribute__((visibility("default")))
int raylib_GetMonitorHeight(int monitor) {
    return GetMonitorHeight(monitor);
}

__attribute__((visibility("default")))
int raylib_GetMonitorPhysicalWidth(int monitor) {
    return GetMonitorPhysicalWidth(monitor);
}

__attribute__((visibility("default")))
int raylib_GetMonitorPhysicalHeight(int monitor) {
    return GetMonitorPhysicalHeight(monitor);
}

__attribute__((visibility("default")))
int raylib_GetMonitorRefreshRate(int monitor) {
    return GetMonitorRefreshRate(monitor);
}

__attribute__((visibility("default")))
Vector2 raylib_GetWindowPosition(void) {
    return GetWindowPosition();
}

__attribute__((visibility("default")))
Vector2 raylib_GetWindowScaleDPI(void) {
    return GetWindowScaleDPI();
}

__attribute__((visibility("default")))
const char * raylib_GetMonitorName(int monitor) {
    return GetMonitorName(monitor);
}

__attribute__((visibility("default")))
void raylib_SetClipboardText(const char * text) {
    SetClipboardText(text);
}

__attribute__((visibility("default")))
const char * raylib_GetClipboardText(void) {
    return GetClipboardText();
}

__attribute__((visibility("default")))
Image raylib_GetClipboardImage(void) {
    return GetClipboardImage();
}

__attribute__((visibility("default")))
void raylib_EnableEventWaiting(void) {
    EnableEventWaiting();
}

__attribute__((visibility("default")))
void raylib_DisableEventWaiting(void) {
    DisableEventWaiting();
}

__attribute__((visibility("default")))
void raylib_ShowCursor(void) {
    ShowCursor();
}

__attribute__((visibility("default")))
void raylib_HideCursor(void) {
    HideCursor();
}

__attribute__((visibility("default")))
_Bool raylib_IsCursorHidden(void) {
    return IsCursorHidden();
}

__attribute__((visibility("default")))
void raylib_EnableCursor(void) {
    EnableCursor();
}

__attribute__((visibility("default")))
void raylib_DisableCursor(void) {
    DisableCursor();
}

__attribute__((visibility("default")))
_Bool raylib_IsCursorOnScreen(void) {
    return IsCursorOnScreen();
}

__attribute__((visibility("default")))
void raylib_ClearBackground(Color color) {
    ClearBackground(color);
}

__attribute__((visibility("default")))
void raylib_BeginDrawing(void) {
    BeginDrawing();
}

__attribute__((visibility("default")))
void raylib_EndDrawing(void) {
    EndDrawing();
}

__attribute__((visibility("default")))
void raylib_BeginMode2D(Camera2D camera) {
    BeginMode2D(camera);
}

__attribute__((visibility("default")))
void raylib_EndMode2D(void) {
    EndMode2D();
}

__attribute__((visibility("default")))
void raylib_BeginMode3D(Camera3D camera) {
    BeginMode3D(camera);
}

__attribute__((visibility("default")))
void raylib_EndMode3D(void) {
    EndMode3D();
}

__attribute__((visibility("default")))
void raylib_BeginTextureMode(RenderTexture2D target) {
    BeginTextureMode(target);
}

__attribute__((visibility("default")))
void raylib_EndTextureMode(void) {
    EndTextureMode();
}

__attribute__((visibility("default")))
void raylib_BeginShaderMode(Shader shader) {
    BeginShaderMode(shader);
}

__attribute__((visibility("default")))
void raylib_EndShaderMode(void) {
    EndShaderMode();
}

__attribute__((visibility("default")))
void raylib_BeginBlendMode(int mode) {
    BeginBlendMode(mode);
}

__attribute__((visibility("default")))
void raylib_EndBlendMode(void) {
    EndBlendMode();
}

__attribute__((visibility("default")))
void raylib_BeginScissorMode(int x, int y, int width, int height) {
    BeginScissorMode(x, y, width, height);
}

__attribute__((visibility("default")))
void raylib_EndScissorMode(void) {
    EndScissorMode();
}

__attribute__((visibility("default")))
void raylib_BeginVrStereoMode(VrStereoConfig config) {
    BeginVrStereoMode(config);
}

__attribute__((visibility("default")))
void raylib_EndVrStereoMode(void) {
    EndVrStereoMode();
}

__attribute__((visibility("default")))
VrStereoConfig raylib_LoadVrStereoConfig(VrDeviceInfo device) {
    return LoadVrStereoConfig(device);
}

__attribute__((visibility("default")))
void raylib_UnloadVrStereoConfig(VrStereoConfig config) {
    UnloadVrStereoConfig(config);
}

__attribute__((visibility("default")))
Shader raylib_LoadShader(const char * vsFileName, const char * fsFileName) {
    return LoadShader(vsFileName, fsFileName);
}

__attribute__((visibility("default")))
Shader raylib_LoadShaderFromMemory(const char * vsCode, const char * fsCode) {
    return LoadShaderFromMemory(vsCode, fsCode);
}

__attribute__((visibility("default")))
_Bool raylib_IsShaderValid(Shader shader) {
    return IsShaderValid(shader);
}

__attribute__((visibility("default")))
int raylib_GetShaderLocation(Shader shader, const char * uniformName) {
    return GetShaderLocation(shader, uniformName);
}

__attribute__((visibility("default")))
int raylib_GetShaderLocationAttrib(Shader shader, const char * attribName) {
    return GetShaderLocationAttrib(shader, attribName);
}

__attribute__((visibility("default")))
void raylib_SetShaderValue(Shader shader, int locIndex, const void * value, int uniformType) {
    SetShaderValue(shader, locIndex, value, uniformType);
}

__attribute__((visibility("default")))
void raylib_SetShaderValueV(Shader shader, int locIndex, const void * value, int uniformType, int count) {
    SetShaderValueV(shader, locIndex, value, uniformType, count);
}

__attribute__((visibility("default")))
void raylib_SetShaderValueMatrix(Shader shader, int locIndex, Matrix mat) {
    SetShaderValueMatrix(shader, locIndex, mat);
}

__attribute__((visibility("default")))
void raylib_SetShaderValueTexture(Shader shader, int locIndex, Texture2D texture) {
    SetShaderValueTexture(shader, locIndex, texture);
}

__attribute__((visibility("default")))
void raylib_UnloadShader(Shader shader) {
    UnloadShader(shader);
}

__attribute__((visibility("default")))
Ray raylib_GetScreenToWorldRay(Vector2 position, Camera camera) {
    return GetScreenToWorldRay(position, camera);
}

__attribute__((visibility("default")))
Ray raylib_GetScreenToWorldRayEx(Vector2 position, Camera camera, int width, int height) {
    return GetScreenToWorldRayEx(position, camera, width, height);
}

__attribute__((visibility("default")))
Vector2 raylib_GetWorldToScreen(Vector3 position, Camera camera) {
    return GetWorldToScreen(position, camera);
}

__attribute__((visibility("default")))
Vector2 raylib_GetWorldToScreenEx(Vector3 position, Camera camera, int width, int height) {
    return GetWorldToScreenEx(position, camera, width, height);
}

__attribute__((visibility("default")))
Vector2 raylib_GetWorldToScreen2D(Vector2 position, Camera2D camera) {
    return GetWorldToScreen2D(position, camera);
}

__attribute__((visibility("default")))
Vector2 raylib_GetScreenToWorld2D(Vector2 position, Camera2D camera) {
    return GetScreenToWorld2D(position, camera);
}

__attribute__((visibility("default")))
Matrix raylib_GetCameraMatrix(Camera camera) {
    return GetCameraMatrix(camera);
}

__attribute__((visibility("default")))
Matrix raylib_GetCameraMatrix2D(Camera2D camera) {
    return GetCameraMatrix2D(camera);
}

__attribute__((visibility("default")))
void raylib_SetTargetFPS(int fps) {
    SetTargetFPS(fps);
}

__attribute__((visibility("default")))
float raylib_GetFrameTime(void) {
    return GetFrameTime();
}

__attribute__((visibility("default")))
double raylib_GetTime(void) {
    return GetTime();
}

__attribute__((visibility("default")))
int raylib_GetFPS(void) {
    return GetFPS();
}

__attribute__((visibility("default")))
void raylib_SwapScreenBuffer(void) {
    SwapScreenBuffer();
}

__attribute__((visibility("default")))
void raylib_PollInputEvents(void) {
    PollInputEvents();
}

__attribute__((visibility("default")))
void raylib_WaitTime(double seconds) {
    WaitTime(seconds);
}

__attribute__((visibility("default")))
void raylib_SetRandomSeed(unsigned int seed) {
    SetRandomSeed(seed);
}

__attribute__((visibility("default")))
int raylib_GetRandomValue(int min, int max) {
    return GetRandomValue(min, max);
}

__attribute__((visibility("default")))
int * raylib_LoadRandomSequence(unsigned int count, int min, int max) {
    return LoadRandomSequence(count, min, max);
}

__attribute__((visibility("default")))
void raylib_UnloadRandomSequence(int * sequence) {
    UnloadRandomSequence(sequence);
}

__attribute__((visibility("default")))
void raylib_TakeScreenshot(const char * fileName) {
    TakeScreenshot(fileName);
}

__attribute__((visibility("default")))
void raylib_SetConfigFlags(unsigned int flags) {
    SetConfigFlags(flags);
}

__attribute__((visibility("default")))
void raylib_OpenURL(const char * url) {
    OpenURL(url);
}

__attribute__((visibility("default")))
void raylib_SetTraceLogLevel(int logLevel) {
    SetTraceLogLevel(logLevel);
}

__attribute__((visibility("default")))
void raylib_SetTraceLogCallback(TraceLogCallback callback) {
    SetTraceLogCallback(callback);
}

__attribute__((visibility("default")))
void * raylib_MemAlloc(unsigned int size) {
    return MemAlloc(size);
}

__attribute__((visibility("default")))
void * raylib_MemRealloc(void * ptr, unsigned int size) {
    return MemRealloc(ptr, size);
}

__attribute__((visibility("default")))
void raylib_MemFree(void * ptr) {
    MemFree(ptr);
}

__attribute__((visibility("default")))
unsigned char * raylib_LoadFileData(const char * fileName, int * dataSize) {
    return LoadFileData(fileName, dataSize);
}

__attribute__((visibility("default")))
void raylib_UnloadFileData(unsigned char * data) {
    UnloadFileData(data);
}

__attribute__((visibility("default")))
_Bool raylib_SaveFileData(const char * fileName, void * data, int dataSize) {
    return SaveFileData(fileName, data, dataSize);
}

__attribute__((visibility("default")))
_Bool raylib_ExportDataAsCode(const unsigned char * data, int dataSize, const char * fileName) {
    return ExportDataAsCode(data, dataSize, fileName);
}

__attribute__((visibility("default")))
char * raylib_LoadFileText(const char * fileName) {
    return LoadFileText(fileName);
}

__attribute__((visibility("default")))
void raylib_UnloadFileText(char * text) {
    UnloadFileText(text);
}

__attribute__((visibility("default")))
_Bool raylib_SaveFileText(const char * fileName, const char * text) {
    return SaveFileText(fileName, text);
}

__attribute__((visibility("default")))
void raylib_SetLoadFileDataCallback(LoadFileDataCallback callback) {
    SetLoadFileDataCallback(callback);
}

__attribute__((visibility("default")))
void raylib_SetSaveFileDataCallback(SaveFileDataCallback callback) {
    SetSaveFileDataCallback(callback);
}

__attribute__((visibility("default")))
void raylib_SetLoadFileTextCallback(LoadFileTextCallback callback) {
    SetLoadFileTextCallback(callback);
}

__attribute__((visibility("default")))
void raylib_SetSaveFileTextCallback(SaveFileTextCallback callback) {
    SetSaveFileTextCallback(callback);
}

__attribute__((visibility("default")))
int raylib_FileRename(const char * fileName, const char * fileRename) {
    return FileRename(fileName, fileRename);
}

__attribute__((visibility("default")))
int raylib_FileRemove(const char * fileName) {
    return FileRemove(fileName);
}

__attribute__((visibility("default")))
int raylib_FileCopy(const char * srcPath, const char * dstPath) {
    return FileCopy(srcPath, dstPath);
}

__attribute__((visibility("default")))
int raylib_FileMove(const char * srcPath, const char * dstPath) {
    return FileMove(srcPath, dstPath);
}

__attribute__((visibility("default")))
int raylib_FileTextReplace(const char * fileName, const char * search, const char * replacement) {
    return FileTextReplace(fileName, search, replacement);
}

__attribute__((visibility("default")))
int raylib_FileTextFindIndex(const char * fileName, const char * search) {
    return FileTextFindIndex(fileName, search);
}

__attribute__((visibility("default")))
_Bool raylib_FileExists(const char * fileName) {
    return FileExists(fileName);
}

__attribute__((visibility("default")))
_Bool raylib_DirectoryExists(const char * dirPath) {
    return DirectoryExists(dirPath);
}

__attribute__((visibility("default")))
_Bool raylib_IsFileExtension(const char * fileName, const char * ext) {
    return IsFileExtension(fileName, ext);
}

__attribute__((visibility("default")))
int raylib_GetFileLength(const char * fileName) {
    return GetFileLength(fileName);
}

__attribute__((visibility("default")))
long raylib_GetFileModTime(const char * fileName) {
    return GetFileModTime(fileName);
}

__attribute__((visibility("default")))
const char * raylib_GetFileExtension(const char * fileName) {
    return GetFileExtension(fileName);
}

__attribute__((visibility("default")))
const char * raylib_GetFileName(const char * filePath) {
    return GetFileName(filePath);
}

__attribute__((visibility("default")))
const char * raylib_GetFileNameWithoutExt(const char * filePath) {
    return GetFileNameWithoutExt(filePath);
}

__attribute__((visibility("default")))
const char * raylib_GetDirectoryPath(const char * filePath) {
    return GetDirectoryPath(filePath);
}

__attribute__((visibility("default")))
const char * raylib_GetPrevDirectoryPath(const char * dirPath) {
    return GetPrevDirectoryPath(dirPath);
}

__attribute__((visibility("default")))
const char * raylib_GetWorkingDirectory(void) {
    return GetWorkingDirectory();
}

__attribute__((visibility("default")))
const char * raylib_GetApplicationDirectory(void) {
    return GetApplicationDirectory();
}

__attribute__((visibility("default")))
int raylib_MakeDirectory(const char * dirPath) {
    return MakeDirectory(dirPath);
}

__attribute__((visibility("default")))
_Bool raylib_ChangeDirectory(const char * dirPath) {
    return ChangeDirectory(dirPath);
}

__attribute__((visibility("default")))
_Bool raylib_IsPathFile(const char * path) {
    return IsPathFile(path);
}

__attribute__((visibility("default")))
_Bool raylib_IsFileNameValid(const char * fileName) {
    return IsFileNameValid(fileName);
}

__attribute__((visibility("default")))
FilePathList raylib_LoadDirectoryFiles(const char * dirPath) {
    return LoadDirectoryFiles(dirPath);
}

__attribute__((visibility("default")))
FilePathList raylib_LoadDirectoryFilesEx(const char * basePath, const char * filter, _Bool scanSubdirs) {
    return LoadDirectoryFilesEx(basePath, filter, scanSubdirs);
}

__attribute__((visibility("default")))
void raylib_UnloadDirectoryFiles(FilePathList files) {
    UnloadDirectoryFiles(files);
}

__attribute__((visibility("default")))
_Bool raylib_IsFileDropped(void) {
    return IsFileDropped();
}

__attribute__((visibility("default")))
FilePathList raylib_LoadDroppedFiles(void) {
    return LoadDroppedFiles();
}

__attribute__((visibility("default")))
void raylib_UnloadDroppedFiles(FilePathList files) {
    UnloadDroppedFiles(files);
}

__attribute__((visibility("default")))
unsigned int raylib_GetDirectoryFileCount(const char * dirPath) {
    return GetDirectoryFileCount(dirPath);
}

__attribute__((visibility("default")))
unsigned int raylib_GetDirectoryFileCountEx(const char * basePath, const char * filter, _Bool scanSubdirs) {
    return GetDirectoryFileCountEx(basePath, filter, scanSubdirs);
}

__attribute__((visibility("default")))
unsigned char * raylib_CompressData(const unsigned char * data, int dataSize, int * compDataSize) {
    return CompressData(data, dataSize, compDataSize);
}

__attribute__((visibility("default")))
unsigned char * raylib_DecompressData(const unsigned char * compData, int compDataSize, int * dataSize) {
    return DecompressData(compData, compDataSize, dataSize);
}

__attribute__((visibility("default")))
char * raylib_EncodeDataBase64(const unsigned char * data, int dataSize, int * outputSize) {
    return EncodeDataBase64(data, dataSize, outputSize);
}

__attribute__((visibility("default")))
unsigned char * raylib_DecodeDataBase64(const char * text, int * outputSize) {
    return DecodeDataBase64(text, outputSize);
}

__attribute__((visibility("default")))
unsigned int raylib_ComputeCRC32(unsigned char * data, int dataSize) {
    return ComputeCRC32(data, dataSize);
}

__attribute__((visibility("default")))
unsigned int * raylib_ComputeMD5(unsigned char * data, int dataSize) {
    return ComputeMD5(data, dataSize);
}

__attribute__((visibility("default")))
unsigned int * raylib_ComputeSHA1(unsigned char * data, int dataSize) {
    return ComputeSHA1(data, dataSize);
}

__attribute__((visibility("default")))
unsigned int * raylib_ComputeSHA256(unsigned char * data, int dataSize) {
    return ComputeSHA256(data, dataSize);
}

__attribute__((visibility("default")))
AutomationEventList raylib_LoadAutomationEventList(const char * fileName) {
    return LoadAutomationEventList(fileName);
}

__attribute__((visibility("default")))
void raylib_UnloadAutomationEventList(AutomationEventList list) {
    UnloadAutomationEventList(list);
}

__attribute__((visibility("default")))
_Bool raylib_ExportAutomationEventList(AutomationEventList list, const char * fileName) {
    return ExportAutomationEventList(list, fileName);
}

__attribute__((visibility("default")))
void raylib_SetAutomationEventList(AutomationEventList * list) {
    SetAutomationEventList(list);
}

__attribute__((visibility("default")))
void raylib_SetAutomationEventBaseFrame(int frame) {
    SetAutomationEventBaseFrame(frame);
}

__attribute__((visibility("default")))
void raylib_StartAutomationEventRecording(void) {
    StartAutomationEventRecording();
}

__attribute__((visibility("default")))
void raylib_StopAutomationEventRecording(void) {
    StopAutomationEventRecording();
}

__attribute__((visibility("default")))
void raylib_PlayAutomationEvent(AutomationEvent event) {
    PlayAutomationEvent(event);
}

__attribute__((visibility("default")))
_Bool raylib_IsKeyPressed(int key) {
    return IsKeyPressed(key);
}

__attribute__((visibility("default")))
_Bool raylib_IsKeyPressedRepeat(int key) {
    return IsKeyPressedRepeat(key);
}

__attribute__((visibility("default")))
_Bool raylib_IsKeyDown(int key) {
    return IsKeyDown(key);
}

__attribute__((visibility("default")))
_Bool raylib_IsKeyReleased(int key) {
    return IsKeyReleased(key);
}

__attribute__((visibility("default")))
_Bool raylib_IsKeyUp(int key) {
    return IsKeyUp(key);
}

__attribute__((visibility("default")))
int raylib_GetKeyPressed(void) {
    return GetKeyPressed();
}

__attribute__((visibility("default")))
int raylib_GetCharPressed(void) {
    return GetCharPressed();
}

__attribute__((visibility("default")))
const char * raylib_GetKeyName(int key) {
    return GetKeyName(key);
}

__attribute__((visibility("default")))
void raylib_SetExitKey(int key) {
    SetExitKey(key);
}

__attribute__((visibility("default")))
_Bool raylib_IsGamepadAvailable(int gamepad) {
    return IsGamepadAvailable(gamepad);
}

__attribute__((visibility("default")))
const char * raylib_GetGamepadName(int gamepad) {
    return GetGamepadName(gamepad);
}

__attribute__((visibility("default")))
_Bool raylib_IsGamepadButtonPressed(int gamepad, int button) {
    return IsGamepadButtonPressed(gamepad, button);
}

__attribute__((visibility("default")))
_Bool raylib_IsGamepadButtonDown(int gamepad, int button) {
    return IsGamepadButtonDown(gamepad, button);
}

__attribute__((visibility("default")))
_Bool raylib_IsGamepadButtonReleased(int gamepad, int button) {
    return IsGamepadButtonReleased(gamepad, button);
}

__attribute__((visibility("default")))
_Bool raylib_IsGamepadButtonUp(int gamepad, int button) {
    return IsGamepadButtonUp(gamepad, button);
}

__attribute__((visibility("default")))
int raylib_GetGamepadButtonPressed(void) {
    return GetGamepadButtonPressed();
}

__attribute__((visibility("default")))
int raylib_GetGamepadAxisCount(int gamepad) {
    return GetGamepadAxisCount(gamepad);
}

__attribute__((visibility("default")))
float raylib_GetGamepadAxisMovement(int gamepad, int axis) {
    return GetGamepadAxisMovement(gamepad, axis);
}

__attribute__((visibility("default")))
int raylib_SetGamepadMappings(const char * mappings) {
    return SetGamepadMappings(mappings);
}

__attribute__((visibility("default")))
void raylib_SetGamepadVibration(int gamepad, float leftMotor, float rightMotor, float duration) {
    SetGamepadVibration(gamepad, leftMotor, rightMotor, duration);
}

__attribute__((visibility("default")))
_Bool raylib_IsMouseButtonPressed(int button) {
    return IsMouseButtonPressed(button);
}

__attribute__((visibility("default")))
_Bool raylib_IsMouseButtonDown(int button) {
    return IsMouseButtonDown(button);
}

__attribute__((visibility("default")))
_Bool raylib_IsMouseButtonReleased(int button) {
    return IsMouseButtonReleased(button);
}

__attribute__((visibility("default")))
_Bool raylib_IsMouseButtonUp(int button) {
    return IsMouseButtonUp(button);
}

__attribute__((visibility("default")))
int raylib_GetMouseX(void) {
    return GetMouseX();
}

__attribute__((visibility("default")))
int raylib_GetMouseY(void) {
    return GetMouseY();
}

__attribute__((visibility("default")))
Vector2 raylib_GetMousePosition(void) {
    return GetMousePosition();
}

__attribute__((visibility("default")))
Vector2 raylib_GetMouseDelta(void) {
    return GetMouseDelta();
}

__attribute__((visibility("default")))
void raylib_SetMousePosition(int x, int y) {
    SetMousePosition(x, y);
}

__attribute__((visibility("default")))
void raylib_SetMouseOffset(int offsetX, int offsetY) {
    SetMouseOffset(offsetX, offsetY);
}

__attribute__((visibility("default")))
void raylib_SetMouseScale(float scaleX, float scaleY) {
    SetMouseScale(scaleX, scaleY);
}

__attribute__((visibility("default")))
float raylib_GetMouseWheelMove(void) {
    return GetMouseWheelMove();
}

__attribute__((visibility("default")))
Vector2 raylib_GetMouseWheelMoveV(void) {
    return GetMouseWheelMoveV();
}

__attribute__((visibility("default")))
void raylib_SetMouseCursor(int cursor) {
    SetMouseCursor(cursor);
}

__attribute__((visibility("default")))
int raylib_GetTouchX(void) {
    return GetTouchX();
}

__attribute__((visibility("default")))
int raylib_GetTouchY(void) {
    return GetTouchY();
}

__attribute__((visibility("default")))
Vector2 raylib_GetTouchPosition(int index) {
    return GetTouchPosition(index);
}

__attribute__((visibility("default")))
int raylib_GetTouchPointId(int index) {
    return GetTouchPointId(index);
}

__attribute__((visibility("default")))
int raylib_GetTouchPointCount(void) {
    return GetTouchPointCount();
}

__attribute__((visibility("default")))
void raylib_SetGesturesEnabled(unsigned int flags) {
    SetGesturesEnabled(flags);
}

__attribute__((visibility("default")))
_Bool raylib_IsGestureDetected(unsigned int gesture) {
    return IsGestureDetected(gesture);
}

__attribute__((visibility("default")))
int raylib_GetGestureDetected(void) {
    return GetGestureDetected();
}

__attribute__((visibility("default")))
float raylib_GetGestureHoldDuration(void) {
    return GetGestureHoldDuration();
}

__attribute__((visibility("default")))
Vector2 raylib_GetGestureDragVector(void) {
    return GetGestureDragVector();
}

__attribute__((visibility("default")))
float raylib_GetGestureDragAngle(void) {
    return GetGestureDragAngle();
}

__attribute__((visibility("default")))
Vector2 raylib_GetGesturePinchVector(void) {
    return GetGesturePinchVector();
}

__attribute__((visibility("default")))
float raylib_GetGesturePinchAngle(void) {
    return GetGesturePinchAngle();
}

__attribute__((visibility("default")))
void raylib_UpdateCamera(Camera * camera, int mode) {
    UpdateCamera(camera, mode);
}

__attribute__((visibility("default")))
void raylib_UpdateCameraPro(Camera * camera, Vector3 movement, Vector3 rotation, float zoom) {
    UpdateCameraPro(camera, movement, rotation, zoom);
}

__attribute__((visibility("default")))
void raylib_SetShapesTexture(Texture2D texture, Rectangle source) {
    SetShapesTexture(texture, source);
}

__attribute__((visibility("default")))
Texture2D raylib_GetShapesTexture(void) {
    return GetShapesTexture();
}

__attribute__((visibility("default")))
Rectangle raylib_GetShapesTextureRectangle(void) {
    return GetShapesTextureRectangle();
}

__attribute__((visibility("default")))
void raylib_DrawPixel(int posX, int posY, Color color) {
    DrawPixel(posX, posY, color);
}

__attribute__((visibility("default")))
void raylib_DrawPixelV(Vector2 position, Color color) {
    DrawPixelV(position, color);
}

__attribute__((visibility("default")))
void raylib_DrawLine(int startPosX, int startPosY, int endPosX, int endPosY, Color color) {
    DrawLine(startPosX, startPosY, endPosX, endPosY, color);
}

__attribute__((visibility("default")))
void raylib_DrawLineV(Vector2 startPos, Vector2 endPos, Color color) {
    DrawLineV(startPos, endPos, color);
}

__attribute__((visibility("default")))
void raylib_DrawLineEx(Vector2 startPos, Vector2 endPos, float thick, Color color) {
    DrawLineEx(startPos, endPos, thick, color);
}

__attribute__((visibility("default")))
void raylib_DrawLineStrip(const Vector2 * points, int pointCount, Color color) {
    DrawLineStrip(points, pointCount, color);
}

__attribute__((visibility("default")))
void raylib_DrawLineBezier(Vector2 startPos, Vector2 endPos, float thick, Color color) {
    DrawLineBezier(startPos, endPos, thick, color);
}

__attribute__((visibility("default")))
void raylib_DrawLineDashed(Vector2 startPos, Vector2 endPos, int dashSize, int spaceSize, Color color) {
    DrawLineDashed(startPos, endPos, dashSize, spaceSize, color);
}

__attribute__((visibility("default")))
void raylib_DrawCircle(int centerX, int centerY, float radius, Color color) {
    DrawCircle(centerX, centerY, radius, color);
}

__attribute__((visibility("default")))
void raylib_DrawCircleV(Vector2 center, float radius, Color color) {
    DrawCircleV(center, radius, color);
}

__attribute__((visibility("default")))
void raylib_DrawCircleGradient(Vector2 center, float radius, Color inner, Color outer) {
    DrawCircleGradient(center, radius, inner, outer);
}

__attribute__((visibility("default")))
void raylib_DrawCircleSector(Vector2 center, float radius, float startAngle, float endAngle, int segments, Color color) {
    DrawCircleSector(center, radius, startAngle, endAngle, segments, color);
}

__attribute__((visibility("default")))
void raylib_DrawCircleSectorLines(Vector2 center, float radius, float startAngle, float endAngle, int segments, Color color) {
    DrawCircleSectorLines(center, radius, startAngle, endAngle, segments, color);
}

__attribute__((visibility("default")))
void raylib_DrawCircleLines(int centerX, int centerY, float radius, Color color) {
    DrawCircleLines(centerX, centerY, radius, color);
}

__attribute__((visibility("default")))
void raylib_DrawCircleLinesV(Vector2 center, float radius, Color color) {
    DrawCircleLinesV(center, radius, color);
}

__attribute__((visibility("default")))
void raylib_DrawEllipse(int centerX, int centerY, float radiusH, float radiusV, Color color) {
    DrawEllipse(centerX, centerY, radiusH, radiusV, color);
}

__attribute__((visibility("default")))
void raylib_DrawEllipseV(Vector2 center, float radiusH, float radiusV, Color color) {
    DrawEllipseV(center, radiusH, radiusV, color);
}

__attribute__((visibility("default")))
void raylib_DrawEllipseLines(int centerX, int centerY, float radiusH, float radiusV, Color color) {
    DrawEllipseLines(centerX, centerY, radiusH, radiusV, color);
}

__attribute__((visibility("default")))
void raylib_DrawEllipseLinesV(Vector2 center, float radiusH, float radiusV, Color color) {
    DrawEllipseLinesV(center, radiusH, radiusV, color);
}

__attribute__((visibility("default")))
void raylib_DrawRing(Vector2 center, float innerRadius, float outerRadius, float startAngle, float endAngle, int segments, Color color) {
    DrawRing(center, innerRadius, outerRadius, startAngle, endAngle, segments, color);
}

__attribute__((visibility("default")))
void raylib_DrawRingLines(Vector2 center, float innerRadius, float outerRadius, float startAngle, float endAngle, int segments, Color color) {
    DrawRingLines(center, innerRadius, outerRadius, startAngle, endAngle, segments, color);
}

__attribute__((visibility("default")))
void raylib_DrawRectangle(int posX, int posY, int width, int height, Color color) {
    DrawRectangle(posX, posY, width, height, color);
}

__attribute__((visibility("default")))
void raylib_DrawRectangleV(Vector2 position, Vector2 size, Color color) {
    DrawRectangleV(position, size, color);
}

__attribute__((visibility("default")))
void raylib_DrawRectangleRec(Rectangle rec, Color color) {
    DrawRectangleRec(rec, color);
}

__attribute__((visibility("default")))
void raylib_DrawRectanglePro(Rectangle rec, Vector2 origin, float rotation, Color color) {
    DrawRectanglePro(rec, origin, rotation, color);
}

__attribute__((visibility("default")))
void raylib_DrawRectangleGradientV(int posX, int posY, int width, int height, Color top, Color bottom) {
    DrawRectangleGradientV(posX, posY, width, height, top, bottom);
}

__attribute__((visibility("default")))
void raylib_DrawRectangleGradientH(int posX, int posY, int width, int height, Color left, Color right) {
    DrawRectangleGradientH(posX, posY, width, height, left, right);
}

__attribute__((visibility("default")))
void raylib_DrawRectangleGradientEx(Rectangle rec, Color topLeft, Color bottomLeft, Color bottomRight, Color topRight) {
    DrawRectangleGradientEx(rec, topLeft, bottomLeft, bottomRight, topRight);
}

__attribute__((visibility("default")))
void raylib_DrawRectangleLines(int posX, int posY, int width, int height, Color color) {
    DrawRectangleLines(posX, posY, width, height, color);
}

__attribute__((visibility("default")))
void raylib_DrawRectangleLinesEx(Rectangle rec, float lineThick, Color color) {
    DrawRectangleLinesEx(rec, lineThick, color);
}

__attribute__((visibility("default")))
void raylib_DrawRectangleRounded(Rectangle rec, float roundness, int segments, Color color) {
    DrawRectangleRounded(rec, roundness, segments, color);
}

__attribute__((visibility("default")))
void raylib_DrawRectangleRoundedLines(Rectangle rec, float roundness, int segments, Color color) {
    DrawRectangleRoundedLines(rec, roundness, segments, color);
}

__attribute__((visibility("default")))
void raylib_DrawRectangleRoundedLinesEx(Rectangle rec, float roundness, int segments, float lineThick, Color color) {
    DrawRectangleRoundedLinesEx(rec, roundness, segments, lineThick, color);
}

__attribute__((visibility("default")))
void raylib_DrawTriangle(Vector2 v1, Vector2 v2, Vector2 v3, Color color) {
    DrawTriangle(v1, v2, v3, color);
}

__attribute__((visibility("default")))
void raylib_DrawTriangleLines(Vector2 v1, Vector2 v2, Vector2 v3, Color color) {
    DrawTriangleLines(v1, v2, v3, color);
}

__attribute__((visibility("default")))
void raylib_DrawTriangleFan(const Vector2 * points, int pointCount, Color color) {
    DrawTriangleFan(points, pointCount, color);
}

__attribute__((visibility("default")))
void raylib_DrawTriangleStrip(const Vector2 * points, int pointCount, Color color) {
    DrawTriangleStrip(points, pointCount, color);
}

__attribute__((visibility("default")))
void raylib_DrawPoly(Vector2 center, int sides, float radius, float rotation, Color color) {
    DrawPoly(center, sides, radius, rotation, color);
}

__attribute__((visibility("default")))
void raylib_DrawPolyLines(Vector2 center, int sides, float radius, float rotation, Color color) {
    DrawPolyLines(center, sides, radius, rotation, color);
}

__attribute__((visibility("default")))
void raylib_DrawPolyLinesEx(Vector2 center, int sides, float radius, float rotation, float lineThick, Color color) {
    DrawPolyLinesEx(center, sides, radius, rotation, lineThick, color);
}

__attribute__((visibility("default")))
void raylib_DrawSplineLinear(const Vector2 * points, int pointCount, float thick, Color color) {
    DrawSplineLinear(points, pointCount, thick, color);
}

__attribute__((visibility("default")))
void raylib_DrawSplineBasis(const Vector2 * points, int pointCount, float thick, Color color) {
    DrawSplineBasis(points, pointCount, thick, color);
}

__attribute__((visibility("default")))
void raylib_DrawSplineCatmullRom(const Vector2 * points, int pointCount, float thick, Color color) {
    DrawSplineCatmullRom(points, pointCount, thick, color);
}

__attribute__((visibility("default")))
void raylib_DrawSplineBezierQuadratic(const Vector2 * points, int pointCount, float thick, Color color) {
    DrawSplineBezierQuadratic(points, pointCount, thick, color);
}

__attribute__((visibility("default")))
void raylib_DrawSplineBezierCubic(const Vector2 * points, int pointCount, float thick, Color color) {
    DrawSplineBezierCubic(points, pointCount, thick, color);
}

__attribute__((visibility("default")))
void raylib_DrawSplineSegmentLinear(Vector2 p1, Vector2 p2, float thick, Color color) {
    DrawSplineSegmentLinear(p1, p2, thick, color);
}

__attribute__((visibility("default")))
void raylib_DrawSplineSegmentBasis(Vector2 p1, Vector2 p2, Vector2 p3, Vector2 p4, float thick, Color color) {
    DrawSplineSegmentBasis(p1, p2, p3, p4, thick, color);
}

__attribute__((visibility("default")))
void raylib_DrawSplineSegmentCatmullRom(Vector2 p1, Vector2 p2, Vector2 p3, Vector2 p4, float thick, Color color) {
    DrawSplineSegmentCatmullRom(p1, p2, p3, p4, thick, color);
}

__attribute__((visibility("default")))
void raylib_DrawSplineSegmentBezierQuadratic(Vector2 p1, Vector2 c2, Vector2 p3, float thick, Color color) {
    DrawSplineSegmentBezierQuadratic(p1, c2, p3, thick, color);
}

__attribute__((visibility("default")))
void raylib_DrawSplineSegmentBezierCubic(Vector2 p1, Vector2 c2, Vector2 c3, Vector2 p4, float thick, Color color) {
    DrawSplineSegmentBezierCubic(p1, c2, c3, p4, thick, color);
}

__attribute__((visibility("default")))
Vector2 raylib_GetSplinePointLinear(Vector2 startPos, Vector2 endPos, float t) {
    return GetSplinePointLinear(startPos, endPos, t);
}

__attribute__((visibility("default")))
Vector2 raylib_GetSplinePointBasis(Vector2 p1, Vector2 p2, Vector2 p3, Vector2 p4, float t) {
    return GetSplinePointBasis(p1, p2, p3, p4, t);
}

__attribute__((visibility("default")))
Vector2 raylib_GetSplinePointCatmullRom(Vector2 p1, Vector2 p2, Vector2 p3, Vector2 p4, float t) {
    return GetSplinePointCatmullRom(p1, p2, p3, p4, t);
}

__attribute__((visibility("default")))
Vector2 raylib_GetSplinePointBezierQuad(Vector2 p1, Vector2 c2, Vector2 p3, float t) {
    return GetSplinePointBezierQuad(p1, c2, p3, t);
}

__attribute__((visibility("default")))
Vector2 raylib_GetSplinePointBezierCubic(Vector2 p1, Vector2 c2, Vector2 c3, Vector2 p4, float t) {
    return GetSplinePointBezierCubic(p1, c2, c3, p4, t);
}

__attribute__((visibility("default")))
_Bool raylib_CheckCollisionRecs(Rectangle rec1, Rectangle rec2) {
    return CheckCollisionRecs(rec1, rec2);
}

__attribute__((visibility("default")))
_Bool raylib_CheckCollisionCircles(Vector2 center1, float radius1, Vector2 center2, float radius2) {
    return CheckCollisionCircles(center1, radius1, center2, radius2);
}

__attribute__((visibility("default")))
_Bool raylib_CheckCollisionCircleRec(Vector2 center, float radius, Rectangle rec) {
    return CheckCollisionCircleRec(center, radius, rec);
}

__attribute__((visibility("default")))
_Bool raylib_CheckCollisionCircleLine(Vector2 center, float radius, Vector2 p1, Vector2 p2) {
    return CheckCollisionCircleLine(center, radius, p1, p2);
}

__attribute__((visibility("default")))
_Bool raylib_CheckCollisionPointRec(Vector2 point, Rectangle rec) {
    return CheckCollisionPointRec(point, rec);
}

__attribute__((visibility("default")))
_Bool raylib_CheckCollisionPointCircle(Vector2 point, Vector2 center, float radius) {
    return CheckCollisionPointCircle(point, center, radius);
}

__attribute__((visibility("default")))
_Bool raylib_CheckCollisionPointTriangle(Vector2 point, Vector2 p1, Vector2 p2, Vector2 p3) {
    return CheckCollisionPointTriangle(point, p1, p2, p3);
}

__attribute__((visibility("default")))
_Bool raylib_CheckCollisionPointLine(Vector2 point, Vector2 p1, Vector2 p2, int threshold) {
    return CheckCollisionPointLine(point, p1, p2, threshold);
}

__attribute__((visibility("default")))
_Bool raylib_CheckCollisionPointPoly(Vector2 point, const Vector2 * points, int pointCount) {
    return CheckCollisionPointPoly(point, points, pointCount);
}

__attribute__((visibility("default")))
_Bool raylib_CheckCollisionLines(Vector2 startPos1, Vector2 endPos1, Vector2 startPos2, Vector2 endPos2, Vector2 * collisionPoint) {
    return CheckCollisionLines(startPos1, endPos1, startPos2, endPos2, collisionPoint);
}

__attribute__((visibility("default")))
Rectangle raylib_GetCollisionRec(Rectangle rec1, Rectangle rec2) {
    return GetCollisionRec(rec1, rec2);
}

__attribute__((visibility("default")))
Image raylib_LoadImage(const char * fileName) {
    return LoadImage(fileName);
}

__attribute__((visibility("default")))
Image raylib_LoadImageRaw(const char * fileName, int width, int height, int format, int headerSize) {
    return LoadImageRaw(fileName, width, height, format, headerSize);
}

__attribute__((visibility("default")))
Image raylib_LoadImageAnim(const char * fileName, int * frames) {
    return LoadImageAnim(fileName, frames);
}

__attribute__((visibility("default")))
Image raylib_LoadImageAnimFromMemory(const char * fileType, const unsigned char * fileData, int dataSize, int * frames) {
    return LoadImageAnimFromMemory(fileType, fileData, dataSize, frames);
}

__attribute__((visibility("default")))
Image raylib_LoadImageFromMemory(const char * fileType, const unsigned char * fileData, int dataSize) {
    return LoadImageFromMemory(fileType, fileData, dataSize);
}

__attribute__((visibility("default")))
Image raylib_LoadImageFromTexture(Texture2D texture) {
    return LoadImageFromTexture(texture);
}

__attribute__((visibility("default")))
Image raylib_LoadImageFromScreen(void) {
    return LoadImageFromScreen();
}

__attribute__((visibility("default")))
_Bool raylib_IsImageValid(Image image) {
    return IsImageValid(image);
}

__attribute__((visibility("default")))
void raylib_UnloadImage(Image image) {
    UnloadImage(image);
}

__attribute__((visibility("default")))
_Bool raylib_ExportImage(Image image, const char * fileName) {
    return ExportImage(image, fileName);
}

__attribute__((visibility("default")))
unsigned char * raylib_ExportImageToMemory(Image image, const char * fileType, int * fileSize) {
    return ExportImageToMemory(image, fileType, fileSize);
}

__attribute__((visibility("default")))
_Bool raylib_ExportImageAsCode(Image image, const char * fileName) {
    return ExportImageAsCode(image, fileName);
}

__attribute__((visibility("default")))
Image raylib_GenImageColor(int width, int height, Color color) {
    return GenImageColor(width, height, color);
}

__attribute__((visibility("default")))
Image raylib_GenImageGradientLinear(int width, int height, int direction, Color start, Color end) {
    return GenImageGradientLinear(width, height, direction, start, end);
}

__attribute__((visibility("default")))
Image raylib_GenImageGradientRadial(int width, int height, float density, Color inner, Color outer) {
    return GenImageGradientRadial(width, height, density, inner, outer);
}

__attribute__((visibility("default")))
Image raylib_GenImageGradientSquare(int width, int height, float density, Color inner, Color outer) {
    return GenImageGradientSquare(width, height, density, inner, outer);
}

__attribute__((visibility("default")))
Image raylib_GenImageChecked(int width, int height, int checksX, int checksY, Color col1, Color col2) {
    return GenImageChecked(width, height, checksX, checksY, col1, col2);
}

__attribute__((visibility("default")))
Image raylib_GenImageWhiteNoise(int width, int height, float factor) {
    return GenImageWhiteNoise(width, height, factor);
}

__attribute__((visibility("default")))
Image raylib_GenImagePerlinNoise(int width, int height, int offsetX, int offsetY, float scale) {
    return GenImagePerlinNoise(width, height, offsetX, offsetY, scale);
}

__attribute__((visibility("default")))
Image raylib_GenImageCellular(int width, int height, int tileSize) {
    return GenImageCellular(width, height, tileSize);
}

__attribute__((visibility("default")))
Image raylib_GenImageText(int width, int height, const char * text) {
    return GenImageText(width, height, text);
}

__attribute__((visibility("default")))
Image raylib_ImageCopy(Image image) {
    return ImageCopy(image);
}

__attribute__((visibility("default")))
Image raylib_ImageFromImage(Image image, Rectangle rec) {
    return ImageFromImage(image, rec);
}

__attribute__((visibility("default")))
Image raylib_ImageFromChannel(Image image, int selectedChannel) {
    return ImageFromChannel(image, selectedChannel);
}

__attribute__((visibility("default")))
Image raylib_ImageText(const char * text, int fontSize, Color color) {
    return ImageText(text, fontSize, color);
}

__attribute__((visibility("default")))
Image raylib_ImageTextEx(Font font, const char * text, float fontSize, float spacing, Color tint) {
    return ImageTextEx(font, text, fontSize, spacing, tint);
}

__attribute__((visibility("default")))
void raylib_ImageFormat(Image * image, int newFormat) {
    ImageFormat(image, newFormat);
}

__attribute__((visibility("default")))
void raylib_ImageToPOT(Image * image, Color fill) {
    ImageToPOT(image, fill);
}

__attribute__((visibility("default")))
void raylib_ImageCrop(Image * image, Rectangle crop) {
    ImageCrop(image, crop);
}

__attribute__((visibility("default")))
void raylib_ImageAlphaCrop(Image * image, float threshold) {
    ImageAlphaCrop(image, threshold);
}

__attribute__((visibility("default")))
void raylib_ImageAlphaClear(Image * image, Color color, float threshold) {
    ImageAlphaClear(image, color, threshold);
}

__attribute__((visibility("default")))
void raylib_ImageAlphaMask(Image * image, Image alphaMask) {
    ImageAlphaMask(image, alphaMask);
}

__attribute__((visibility("default")))
void raylib_ImageAlphaPremultiply(Image * image) {
    ImageAlphaPremultiply(image);
}

__attribute__((visibility("default")))
void raylib_ImageBlurGaussian(Image * image, int blurSize) {
    ImageBlurGaussian(image, blurSize);
}

__attribute__((visibility("default")))
void raylib_ImageKernelConvolution(Image * image, const float * kernel, int kernelSize) {
    ImageKernelConvolution(image, kernel, kernelSize);
}

__attribute__((visibility("default")))
void raylib_ImageResize(Image * image, int newWidth, int newHeight) {
    ImageResize(image, newWidth, newHeight);
}

__attribute__((visibility("default")))
void raylib_ImageResizeNN(Image * image, int newWidth, int newHeight) {
    ImageResizeNN(image, newWidth, newHeight);
}

__attribute__((visibility("default")))
void raylib_ImageResizeCanvas(Image * image, int newWidth, int newHeight, int offsetX, int offsetY, Color fill) {
    ImageResizeCanvas(image, newWidth, newHeight, offsetX, offsetY, fill);
}

__attribute__((visibility("default")))
void raylib_ImageMipmaps(Image * image) {
    ImageMipmaps(image);
}

__attribute__((visibility("default")))
void raylib_ImageDither(Image * image, int rBpp, int gBpp, int bBpp, int aBpp) {
    ImageDither(image, rBpp, gBpp, bBpp, aBpp);
}

__attribute__((visibility("default")))
void raylib_ImageFlipVertical(Image * image) {
    ImageFlipVertical(image);
}

__attribute__((visibility("default")))
void raylib_ImageFlipHorizontal(Image * image) {
    ImageFlipHorizontal(image);
}

__attribute__((visibility("default")))
void raylib_ImageRotate(Image * image, int degrees) {
    ImageRotate(image, degrees);
}

__attribute__((visibility("default")))
void raylib_ImageRotateCW(Image * image) {
    ImageRotateCW(image);
}

__attribute__((visibility("default")))
void raylib_ImageRotateCCW(Image * image) {
    ImageRotateCCW(image);
}

__attribute__((visibility("default")))
void raylib_ImageColorTint(Image * image, Color color) {
    ImageColorTint(image, color);
}

__attribute__((visibility("default")))
void raylib_ImageColorInvert(Image * image) {
    ImageColorInvert(image);
}

__attribute__((visibility("default")))
void raylib_ImageColorGrayscale(Image * image) {
    ImageColorGrayscale(image);
}

__attribute__((visibility("default")))
void raylib_ImageColorContrast(Image * image, float contrast) {
    ImageColorContrast(image, contrast);
}

__attribute__((visibility("default")))
void raylib_ImageColorBrightness(Image * image, int brightness) {
    ImageColorBrightness(image, brightness);
}

__attribute__((visibility("default")))
void raylib_ImageColorReplace(Image * image, Color color, Color replace) {
    ImageColorReplace(image, color, replace);
}

__attribute__((visibility("default")))
Color * raylib_LoadImageColors(Image image) {
    return LoadImageColors(image);
}

__attribute__((visibility("default")))
Color * raylib_LoadImagePalette(Image image, int maxPaletteSize, int * colorCount) {
    return LoadImagePalette(image, maxPaletteSize, colorCount);
}

__attribute__((visibility("default")))
void raylib_UnloadImageColors(Color * colors) {
    UnloadImageColors(colors);
}

__attribute__((visibility("default")))
void raylib_UnloadImagePalette(Color * colors) {
    UnloadImagePalette(colors);
}

__attribute__((visibility("default")))
Rectangle raylib_GetImageAlphaBorder(Image image, float threshold) {
    return GetImageAlphaBorder(image, threshold);
}

__attribute__((visibility("default")))
Color raylib_GetImageColor(Image image, int x, int y) {
    return GetImageColor(image, x, y);
}

__attribute__((visibility("default")))
void raylib_ImageClearBackground(Image * dst, Color color) {
    ImageClearBackground(dst, color);
}

__attribute__((visibility("default")))
void raylib_ImageDrawPixel(Image * dst, int posX, int posY, Color color) {
    ImageDrawPixel(dst, posX, posY, color);
}

__attribute__((visibility("default")))
void raylib_ImageDrawPixelV(Image * dst, Vector2 position, Color color) {
    ImageDrawPixelV(dst, position, color);
}

__attribute__((visibility("default")))
void raylib_ImageDrawLine(Image * dst, int startPosX, int startPosY, int endPosX, int endPosY, Color color) {
    ImageDrawLine(dst, startPosX, startPosY, endPosX, endPosY, color);
}

__attribute__((visibility("default")))
void raylib_ImageDrawLineV(Image * dst, Vector2 start, Vector2 end, Color color) {
    ImageDrawLineV(dst, start, end, color);
}

__attribute__((visibility("default")))
void raylib_ImageDrawLineEx(Image * dst, Vector2 start, Vector2 end, int thick, Color color) {
    ImageDrawLineEx(dst, start, end, thick, color);
}

__attribute__((visibility("default")))
void raylib_ImageDrawCircle(Image * dst, int centerX, int centerY, int radius, Color color) {
    ImageDrawCircle(dst, centerX, centerY, radius, color);
}

__attribute__((visibility("default")))
void raylib_ImageDrawCircleV(Image * dst, Vector2 center, int radius, Color color) {
    ImageDrawCircleV(dst, center, radius, color);
}

__attribute__((visibility("default")))
void raylib_ImageDrawCircleLines(Image * dst, int centerX, int centerY, int radius, Color color) {
    ImageDrawCircleLines(dst, centerX, centerY, radius, color);
}

__attribute__((visibility("default")))
void raylib_ImageDrawCircleLinesV(Image * dst, Vector2 center, int radius, Color color) {
    ImageDrawCircleLinesV(dst, center, radius, color);
}

__attribute__((visibility("default")))
void raylib_ImageDrawRectangle(Image * dst, int posX, int posY, int width, int height, Color color) {
    ImageDrawRectangle(dst, posX, posY, width, height, color);
}

__attribute__((visibility("default")))
void raylib_ImageDrawRectangleV(Image * dst, Vector2 position, Vector2 size, Color color) {
    ImageDrawRectangleV(dst, position, size, color);
}

__attribute__((visibility("default")))
void raylib_ImageDrawRectangleRec(Image * dst, Rectangle rec, Color color) {
    ImageDrawRectangleRec(dst, rec, color);
}

__attribute__((visibility("default")))
void raylib_ImageDrawRectangleLines(Image * dst, Rectangle rec, int thick, Color color) {
    ImageDrawRectangleLines(dst, rec, thick, color);
}

__attribute__((visibility("default")))
void raylib_ImageDrawTriangle(Image * dst, Vector2 v1, Vector2 v2, Vector2 v3, Color color) {
    ImageDrawTriangle(dst, v1, v2, v3, color);
}

__attribute__((visibility("default")))
void raylib_ImageDrawTriangleEx(Image * dst, Vector2 v1, Vector2 v2, Vector2 v3, Color c1, Color c2, Color c3) {
    ImageDrawTriangleEx(dst, v1, v2, v3, c1, c2, c3);
}

__attribute__((visibility("default")))
void raylib_ImageDrawTriangleLines(Image * dst, Vector2 v1, Vector2 v2, Vector2 v3, Color color) {
    ImageDrawTriangleLines(dst, v1, v2, v3, color);
}

__attribute__((visibility("default")))
void raylib_ImageDrawTriangleFan(Image * dst, const Vector2 * points, int pointCount, Color color) {
    ImageDrawTriangleFan(dst, points, pointCount, color);
}

__attribute__((visibility("default")))
void raylib_ImageDrawTriangleStrip(Image * dst, const Vector2 * points, int pointCount, Color color) {
    ImageDrawTriangleStrip(dst, points, pointCount, color);
}

__attribute__((visibility("default")))
void raylib_ImageDraw(Image * dst, Image src, Rectangle srcRec, Rectangle dstRec, Color tint) {
    ImageDraw(dst, src, srcRec, dstRec, tint);
}

__attribute__((visibility("default")))
void raylib_ImageDrawText(Image * dst, const char * text, int posX, int posY, int fontSize, Color color) {
    ImageDrawText(dst, text, posX, posY, fontSize, color);
}

__attribute__((visibility("default")))
void raylib_ImageDrawTextEx(Image * dst, Font font, const char * text, Vector2 position, float fontSize, float spacing, Color tint) {
    ImageDrawTextEx(dst, font, text, position, fontSize, spacing, tint);
}

__attribute__((visibility("default")))
Texture2D raylib_LoadTexture(const char * fileName) {
    return LoadTexture(fileName);
}

__attribute__((visibility("default")))
Texture2D raylib_LoadTextureFromImage(Image image) {
    return LoadTextureFromImage(image);
}

__attribute__((visibility("default")))
TextureCubemap raylib_LoadTextureCubemap(Image image, int layout) {
    return LoadTextureCubemap(image, layout);
}

__attribute__((visibility("default")))
RenderTexture2D raylib_LoadRenderTexture(int width, int height) {
    return LoadRenderTexture(width, height);
}

__attribute__((visibility("default")))
_Bool raylib_IsTextureValid(Texture2D texture) {
    return IsTextureValid(texture);
}

__attribute__((visibility("default")))
void raylib_UnloadTexture(Texture2D texture) {
    UnloadTexture(texture);
}

__attribute__((visibility("default")))
_Bool raylib_IsRenderTextureValid(RenderTexture2D target) {
    return IsRenderTextureValid(target);
}

__attribute__((visibility("default")))
void raylib_UnloadRenderTexture(RenderTexture2D target) {
    UnloadRenderTexture(target);
}

__attribute__((visibility("default")))
void raylib_UpdateTexture(Texture2D texture, const void * pixels) {
    UpdateTexture(texture, pixels);
}

__attribute__((visibility("default")))
void raylib_UpdateTextureRec(Texture2D texture, Rectangle rec, const void * pixels) {
    UpdateTextureRec(texture, rec, pixels);
}

__attribute__((visibility("default")))
void raylib_GenTextureMipmaps(Texture2D * texture) {
    GenTextureMipmaps(texture);
}

__attribute__((visibility("default")))
void raylib_SetTextureFilter(Texture2D texture, int filter) {
    SetTextureFilter(texture, filter);
}

__attribute__((visibility("default")))
void raylib_SetTextureWrap(Texture2D texture, int wrap) {
    SetTextureWrap(texture, wrap);
}

__attribute__((visibility("default")))
void raylib_DrawTexture(Texture2D texture, int posX, int posY, Color tint) {
    DrawTexture(texture, posX, posY, tint);
}

__attribute__((visibility("default")))
void raylib_DrawTextureV(Texture2D texture, Vector2 position, Color tint) {
    DrawTextureV(texture, position, tint);
}

__attribute__((visibility("default")))
void raylib_DrawTextureEx(Texture2D texture, Vector2 position, float rotation, float scale, Color tint) {
    DrawTextureEx(texture, position, rotation, scale, tint);
}

__attribute__((visibility("default")))
void raylib_DrawTextureRec(Texture2D texture, Rectangle source, Vector2 position, Color tint) {
    DrawTextureRec(texture, source, position, tint);
}

__attribute__((visibility("default")))
void raylib_DrawTexturePro(Texture2D texture, Rectangle source, Rectangle dest, Vector2 origin, float rotation, Color tint) {
    DrawTexturePro(texture, source, dest, origin, rotation, tint);
}

__attribute__((visibility("default")))
void raylib_DrawTextureNPatch(Texture2D texture, NPatchInfo nPatchInfo, Rectangle dest, Vector2 origin, float rotation, Color tint) {
    DrawTextureNPatch(texture, nPatchInfo, dest, origin, rotation, tint);
}

__attribute__((visibility("default")))
_Bool raylib_ColorIsEqual(Color col1, Color col2) {
    return ColorIsEqual(col1, col2);
}

__attribute__((visibility("default")))
Color raylib_Fade(Color color, float alpha) {
    return Fade(color, alpha);
}

__attribute__((visibility("default")))
int raylib_ColorToInt(Color color) {
    return ColorToInt(color);
}

__attribute__((visibility("default")))
Vector4 raylib_ColorNormalize(Color color) {
    return ColorNormalize(color);
}

__attribute__((visibility("default")))
Color raylib_ColorFromNormalized(Vector4 normalized) {
    return ColorFromNormalized(normalized);
}

__attribute__((visibility("default")))
Vector3 raylib_ColorToHSV(Color color) {
    return ColorToHSV(color);
}

__attribute__((visibility("default")))
Color raylib_ColorFromHSV(float hue, float saturation, float value) {
    return ColorFromHSV(hue, saturation, value);
}

__attribute__((visibility("default")))
Color raylib_ColorTint(Color color, Color tint) {
    return ColorTint(color, tint);
}

__attribute__((visibility("default")))
Color raylib_ColorBrightness(Color color, float factor) {
    return ColorBrightness(color, factor);
}

__attribute__((visibility("default")))
Color raylib_ColorContrast(Color color, float contrast) {
    return ColorContrast(color, contrast);
}

__attribute__((visibility("default")))
Color raylib_ColorAlpha(Color color, float alpha) {
    return ColorAlpha(color, alpha);
}

__attribute__((visibility("default")))
Color raylib_ColorAlphaBlend(Color dst, Color src, Color tint) {
    return ColorAlphaBlend(dst, src, tint);
}

__attribute__((visibility("default")))
Color raylib_ColorLerp(Color color1, Color color2, float factor) {
    return ColorLerp(color1, color2, factor);
}

__attribute__((visibility("default")))
Color raylib_GetColor(unsigned int hexValue) {
    return GetColor(hexValue);
}

__attribute__((visibility("default")))
Color raylib_GetPixelColor(void * srcPtr, int format) {
    return GetPixelColor(srcPtr, format);
}

__attribute__((visibility("default")))
void raylib_SetPixelColor(void * dstPtr, Color color, int format) {
    SetPixelColor(dstPtr, color, format);
}

__attribute__((visibility("default")))
int raylib_GetPixelDataSize(int width, int height, int format) {
    return GetPixelDataSize(width, height, format);
}

__attribute__((visibility("default")))
Font raylib_GetFontDefault(void) {
    return GetFontDefault();
}

__attribute__((visibility("default")))
Font raylib_LoadFont(const char * fileName) {
    return LoadFont(fileName);
}

__attribute__((visibility("default")))
Font raylib_LoadFontEx(const char * fileName, int fontSize, const int * codepoints, int codepointCount) {
    return LoadFontEx(fileName, fontSize, codepoints, codepointCount);
}

__attribute__((visibility("default")))
Font raylib_LoadFontFromImage(Image image, Color key, int firstChar) {
    return LoadFontFromImage(image, key, firstChar);
}

__attribute__((visibility("default")))
Font raylib_LoadFontFromMemory(const char * fileType, const unsigned char * fileData, int dataSize, int fontSize, const int * codepoints, int codepointCount) {
    return LoadFontFromMemory(fileType, fileData, dataSize, fontSize, codepoints, codepointCount);
}

__attribute__((visibility("default")))
_Bool raylib_IsFontValid(Font font) {
    return IsFontValid(font);
}

__attribute__((visibility("default")))
GlyphInfo * raylib_LoadFontData(const unsigned char * fileData, int dataSize, int fontSize, const int * codepoints, int codepointCount, int type, int * glyphCount) {
    return LoadFontData(fileData, dataSize, fontSize, codepoints, codepointCount, type, glyphCount);
}

__attribute__((visibility("default")))
Image raylib_GenImageFontAtlas(const GlyphInfo * glyphs, Rectangle ** glyphRecs, int glyphCount, int fontSize, int padding, int packMethod) {
    return GenImageFontAtlas(glyphs, glyphRecs, glyphCount, fontSize, padding, packMethod);
}

__attribute__((visibility("default")))
void raylib_UnloadFontData(GlyphInfo * glyphs, int glyphCount) {
    UnloadFontData(glyphs, glyphCount);
}

__attribute__((visibility("default")))
void raylib_UnloadFont(Font font) {
    UnloadFont(font);
}

__attribute__((visibility("default")))
_Bool raylib_ExportFontAsCode(Font font, const char * fileName) {
    return ExportFontAsCode(font, fileName);
}

__attribute__((visibility("default")))
void raylib_DrawFPS(int posX, int posY) {
    DrawFPS(posX, posY);
}

__attribute__((visibility("default")))
void raylib_DrawText(const char * text, int posX, int posY, int fontSize, Color color) {
    DrawText(text, posX, posY, fontSize, color);
}

__attribute__((visibility("default")))
void raylib_DrawTextEx(Font font, const char * text, Vector2 position, float fontSize, float spacing, Color tint) {
    DrawTextEx(font, text, position, fontSize, spacing, tint);
}

__attribute__((visibility("default")))
void raylib_DrawTextPro(Font font, const char * text, Vector2 position, Vector2 origin, float rotation, float fontSize, float spacing, Color tint) {
    DrawTextPro(font, text, position, origin, rotation, fontSize, spacing, tint);
}

__attribute__((visibility("default")))
void raylib_DrawTextCodepoint(Font font, int codepoint, Vector2 position, float fontSize, Color tint) {
    DrawTextCodepoint(font, codepoint, position, fontSize, tint);
}

__attribute__((visibility("default")))
void raylib_DrawTextCodepoints(Font font, const int * codepoints, int codepointCount, Vector2 position, float fontSize, float spacing, Color tint) {
    DrawTextCodepoints(font, codepoints, codepointCount, position, fontSize, spacing, tint);
}

__attribute__((visibility("default")))
void raylib_SetTextLineSpacing(int spacing) {
    SetTextLineSpacing(spacing);
}

__attribute__((visibility("default")))
int raylib_MeasureText(const char * text, int fontSize) {
    return MeasureText(text, fontSize);
}

__attribute__((visibility("default")))
Vector2 raylib_MeasureTextEx(Font font, const char * text, float fontSize, float spacing) {
    return MeasureTextEx(font, text, fontSize, spacing);
}

__attribute__((visibility("default")))
Vector2 raylib_MeasureTextCodepoints(Font font, const int * codepoints, int length, float fontSize, float spacing) {
    return MeasureTextCodepoints(font, codepoints, length, fontSize, spacing);
}

__attribute__((visibility("default")))
int raylib_GetGlyphIndex(Font font, int codepoint) {
    return GetGlyphIndex(font, codepoint);
}

__attribute__((visibility("default")))
GlyphInfo raylib_GetGlyphInfo(Font font, int codepoint) {
    return GetGlyphInfo(font, codepoint);
}

__attribute__((visibility("default")))
Rectangle raylib_GetGlyphAtlasRec(Font font, int codepoint) {
    return GetGlyphAtlasRec(font, codepoint);
}

__attribute__((visibility("default")))
char * raylib_LoadUTF8(const int * codepoints, int length) {
    return LoadUTF8(codepoints, length);
}

__attribute__((visibility("default")))
void raylib_UnloadUTF8(char * text) {
    UnloadUTF8(text);
}

__attribute__((visibility("default")))
int * raylib_LoadCodepoints(const char * text, int * count) {
    return LoadCodepoints(text, count);
}

__attribute__((visibility("default")))
void raylib_UnloadCodepoints(int * codepoints) {
    UnloadCodepoints(codepoints);
}

__attribute__((visibility("default")))
int raylib_GetCodepointCount(const char * text) {
    return GetCodepointCount(text);
}

__attribute__((visibility("default")))
int raylib_GetCodepoint(const char * text, int * codepointSize) {
    return GetCodepoint(text, codepointSize);
}

__attribute__((visibility("default")))
int raylib_GetCodepointNext(const char * text, int * codepointSize) {
    return GetCodepointNext(text, codepointSize);
}

__attribute__((visibility("default")))
int raylib_GetCodepointPrevious(const char * text, int * codepointSize) {
    return GetCodepointPrevious(text, codepointSize);
}

__attribute__((visibility("default")))
const char * raylib_CodepointToUTF8(int codepoint, int * utf8Size) {
    return CodepointToUTF8(codepoint, utf8Size);
}

__attribute__((visibility("default")))
char ** raylib_LoadTextLines(const char * text, int * count) {
    return LoadTextLines(text, count);
}

__attribute__((visibility("default")))
void raylib_UnloadTextLines(char ** text, int lineCount) {
    UnloadTextLines(text, lineCount);
}

__attribute__((visibility("default")))
int raylib_TextCopy(char * dst, const char * src) {
    return TextCopy(dst, src);
}

__attribute__((visibility("default")))
_Bool raylib_TextIsEqual(const char * text1, const char * text2) {
    return TextIsEqual(text1, text2);
}

__attribute__((visibility("default")))
unsigned int raylib_TextLength(const char * text) {
    return TextLength(text);
}

__attribute__((visibility("default")))
const char * raylib_TextSubtext(const char * text, int position, int length) {
    return TextSubtext(text, position, length);
}

__attribute__((visibility("default")))
const char * raylib_TextRemoveSpaces(const char * text) {
    return TextRemoveSpaces(text);
}

__attribute__((visibility("default")))
char * raylib_GetTextBetween(const char * text, const char * begin, const char * end) {
    return GetTextBetween(text, begin, end);
}

__attribute__((visibility("default")))
char * raylib_TextReplace(const char * text, const char * search, const char * replacement) {
    return TextReplace(text, search, replacement);
}

__attribute__((visibility("default")))
char * raylib_TextReplaceAlloc(const char * text, const char * search, const char * replacement) {
    return TextReplaceAlloc(text, search, replacement);
}

__attribute__((visibility("default")))
char * raylib_TextReplaceBetween(const char * text, const char * begin, const char * end, const char * replacement) {
    return TextReplaceBetween(text, begin, end, replacement);
}

__attribute__((visibility("default")))
char * raylib_TextReplaceBetweenAlloc(const char * text, const char * begin, const char * end, const char * replacement) {
    return TextReplaceBetweenAlloc(text, begin, end, replacement);
}

__attribute__((visibility("default")))
char * raylib_TextInsert(const char * text, const char * insert, int position) {
    return TextInsert(text, insert, position);
}

__attribute__((visibility("default")))
char * raylib_TextInsertAlloc(const char * text, const char * insert, int position) {
    return TextInsertAlloc(text, insert, position);
}

__attribute__((visibility("default")))
char * raylib_TextJoin(char ** textList, int count, const char * delimiter) {
    return TextJoin(textList, count, delimiter);
}

__attribute__((visibility("default")))
char ** raylib_TextSplit(const char * text, char delimiter, int * count) {
    return TextSplit(text, delimiter, count);
}

__attribute__((visibility("default")))
void raylib_TextAppend(char * text, const char * append, int * position) {
    TextAppend(text, append, position);
}

__attribute__((visibility("default")))
int raylib_TextFindIndex(const char * text, const char * search) {
    return TextFindIndex(text, search);
}

__attribute__((visibility("default")))
char * raylib_TextToUpper(const char * text) {
    return TextToUpper(text);
}

__attribute__((visibility("default")))
char * raylib_TextToLower(const char * text) {
    return TextToLower(text);
}

__attribute__((visibility("default")))
char * raylib_TextToPascal(const char * text) {
    return TextToPascal(text);
}

__attribute__((visibility("default")))
char * raylib_TextToSnake(const char * text) {
    return TextToSnake(text);
}

__attribute__((visibility("default")))
char * raylib_TextToCamel(const char * text) {
    return TextToCamel(text);
}

__attribute__((visibility("default")))
int raylib_TextToInteger(const char * text) {
    return TextToInteger(text);
}

__attribute__((visibility("default")))
float raylib_TextToFloat(const char * text) {
    return TextToFloat(text);
}

__attribute__((visibility("default")))
void raylib_DrawLine3D(Vector3 startPos, Vector3 endPos, Color color) {
    DrawLine3D(startPos, endPos, color);
}

__attribute__((visibility("default")))
void raylib_DrawPoint3D(Vector3 position, Color color) {
    DrawPoint3D(position, color);
}

__attribute__((visibility("default")))
void raylib_DrawCircle3D(Vector3 center, float radius, Vector3 rotationAxis, float rotationAngle, Color color) {
    DrawCircle3D(center, radius, rotationAxis, rotationAngle, color);
}

__attribute__((visibility("default")))
void raylib_DrawTriangle3D(Vector3 v1, Vector3 v2, Vector3 v3, Color color) {
    DrawTriangle3D(v1, v2, v3, color);
}

__attribute__((visibility("default")))
void raylib_DrawTriangleStrip3D(const Vector3 * points, int pointCount, Color color) {
    DrawTriangleStrip3D(points, pointCount, color);
}

__attribute__((visibility("default")))
void raylib_DrawCube(Vector3 position, float width, float height, float length, Color color) {
    DrawCube(position, width, height, length, color);
}

__attribute__((visibility("default")))
void raylib_DrawCubeV(Vector3 position, Vector3 size, Color color) {
    DrawCubeV(position, size, color);
}

__attribute__((visibility("default")))
void raylib_DrawCubeWires(Vector3 position, float width, float height, float length, Color color) {
    DrawCubeWires(position, width, height, length, color);
}

__attribute__((visibility("default")))
void raylib_DrawCubeWiresV(Vector3 position, Vector3 size, Color color) {
    DrawCubeWiresV(position, size, color);
}

__attribute__((visibility("default")))
void raylib_DrawSphere(Vector3 centerPos, float radius, Color color) {
    DrawSphere(centerPos, radius, color);
}

__attribute__((visibility("default")))
void raylib_DrawSphereEx(Vector3 centerPos, float radius, int rings, int slices, Color color) {
    DrawSphereEx(centerPos, radius, rings, slices, color);
}

__attribute__((visibility("default")))
void raylib_DrawSphereWires(Vector3 centerPos, float radius, int rings, int slices, Color color) {
    DrawSphereWires(centerPos, radius, rings, slices, color);
}

__attribute__((visibility("default")))
void raylib_DrawCylinder(Vector3 position, float radiusTop, float radiusBottom, float height, int slices, Color color) {
    DrawCylinder(position, radiusTop, radiusBottom, height, slices, color);
}

__attribute__((visibility("default")))
void raylib_DrawCylinderEx(Vector3 startPos, Vector3 endPos, float startRadius, float endRadius, int sides, Color color) {
    DrawCylinderEx(startPos, endPos, startRadius, endRadius, sides, color);
}

__attribute__((visibility("default")))
void raylib_DrawCylinderWires(Vector3 position, float radiusTop, float radiusBottom, float height, int slices, Color color) {
    DrawCylinderWires(position, radiusTop, radiusBottom, height, slices, color);
}

__attribute__((visibility("default")))
void raylib_DrawCylinderWiresEx(Vector3 startPos, Vector3 endPos, float startRadius, float endRadius, int sides, Color color) {
    DrawCylinderWiresEx(startPos, endPos, startRadius, endRadius, sides, color);
}

__attribute__((visibility("default")))
void raylib_DrawCapsule(Vector3 startPos, Vector3 endPos, float radius, int slices, int rings, Color color) {
    DrawCapsule(startPos, endPos, radius, slices, rings, color);
}

__attribute__((visibility("default")))
void raylib_DrawCapsuleWires(Vector3 startPos, Vector3 endPos, float radius, int slices, int rings, Color color) {
    DrawCapsuleWires(startPos, endPos, radius, slices, rings, color);
}

__attribute__((visibility("default")))
void raylib_DrawPlane(Vector3 centerPos, Vector2 size, Color color) {
    DrawPlane(centerPos, size, color);
}

__attribute__((visibility("default")))
void raylib_DrawRay(Ray ray, Color color) {
    DrawRay(ray, color);
}

__attribute__((visibility("default")))
void raylib_DrawGrid(int slices, float spacing) {
    DrawGrid(slices, spacing);
}

__attribute__((visibility("default")))
Model raylib_LoadModel(const char * fileName) {
    return LoadModel(fileName);
}

__attribute__((visibility("default")))
Model raylib_LoadModelFromMesh(Mesh mesh) {
    return LoadModelFromMesh(mesh);
}

__attribute__((visibility("default")))
_Bool raylib_IsModelValid(Model model) {
    return IsModelValid(model);
}

__attribute__((visibility("default")))
void raylib_UnloadModel(Model model) {
    UnloadModel(model);
}

__attribute__((visibility("default")))
BoundingBox raylib_GetModelBoundingBox(Model model) {
    return GetModelBoundingBox(model);
}

__attribute__((visibility("default")))
void raylib_DrawModel(Model model, Vector3 position, float scale, Color tint) {
    DrawModel(model, position, scale, tint);
}

__attribute__((visibility("default")))
void raylib_DrawModelEx(Model model, Vector3 position, Vector3 rotationAxis, float rotationAngle, Vector3 scale, Color tint) {
    DrawModelEx(model, position, rotationAxis, rotationAngle, scale, tint);
}

__attribute__((visibility("default")))
void raylib_DrawModelWires(Model model, Vector3 position, float scale, Color tint) {
    DrawModelWires(model, position, scale, tint);
}

__attribute__((visibility("default")))
void raylib_DrawModelWiresEx(Model model, Vector3 position, Vector3 rotationAxis, float rotationAngle, Vector3 scale, Color tint) {
    DrawModelWiresEx(model, position, rotationAxis, rotationAngle, scale, tint);
}

__attribute__((visibility("default")))
void raylib_DrawBoundingBox(BoundingBox box, Color color) {
    DrawBoundingBox(box, color);
}

__attribute__((visibility("default")))
void raylib_DrawBillboard(Camera camera, Texture2D texture, Vector3 position, float scale, Color tint) {
    DrawBillboard(camera, texture, position, scale, tint);
}

__attribute__((visibility("default")))
void raylib_DrawBillboardRec(Camera camera, Texture2D texture, Rectangle source, Vector3 position, Vector2 size, Color tint) {
    DrawBillboardRec(camera, texture, source, position, size, tint);
}

__attribute__((visibility("default")))
void raylib_DrawBillboardPro(Camera camera, Texture2D texture, Rectangle source, Vector3 position, Vector3 up, Vector2 size, Vector2 origin, float rotation, Color tint) {
    DrawBillboardPro(camera, texture, source, position, up, size, origin, rotation, tint);
}

__attribute__((visibility("default")))
void raylib_UploadMesh(Mesh * mesh, _Bool dynamic) {
    UploadMesh(mesh, dynamic);
}

__attribute__((visibility("default")))
void raylib_UpdateMeshBuffer(Mesh mesh, int index, const void * data, int dataSize, int offset) {
    UpdateMeshBuffer(mesh, index, data, dataSize, offset);
}

__attribute__((visibility("default")))
void raylib_UnloadMesh(Mesh mesh) {
    UnloadMesh(mesh);
}

__attribute__((visibility("default")))
void raylib_DrawMesh(Mesh mesh, Material material, Matrix transform) {
    DrawMesh(mesh, material, transform);
}

__attribute__((visibility("default")))
void raylib_DrawMeshInstanced(Mesh mesh, Material material, const Matrix * transforms, int instances) {
    DrawMeshInstanced(mesh, material, transforms, instances);
}

__attribute__((visibility("default")))
BoundingBox raylib_GetMeshBoundingBox(Mesh mesh) {
    return GetMeshBoundingBox(mesh);
}

__attribute__((visibility("default")))
void raylib_GenMeshTangents(Mesh * mesh) {
    GenMeshTangents(mesh);
}

__attribute__((visibility("default")))
_Bool raylib_ExportMesh(Mesh mesh, const char * fileName) {
    return ExportMesh(mesh, fileName);
}

__attribute__((visibility("default")))
_Bool raylib_ExportMeshAsCode(Mesh mesh, const char * fileName) {
    return ExportMeshAsCode(mesh, fileName);
}

__attribute__((visibility("default")))
Mesh raylib_GenMeshPoly(int sides, float radius) {
    return GenMeshPoly(sides, radius);
}

__attribute__((visibility("default")))
Mesh raylib_GenMeshPlane(float width, float length, int resX, int resZ) {
    return GenMeshPlane(width, length, resX, resZ);
}

__attribute__((visibility("default")))
Mesh raylib_GenMeshCube(float width, float height, float length) {
    return GenMeshCube(width, height, length);
}

__attribute__((visibility("default")))
Mesh raylib_GenMeshSphere(float radius, int rings, int slices) {
    return GenMeshSphere(radius, rings, slices);
}

__attribute__((visibility("default")))
Mesh raylib_GenMeshHemiSphere(float radius, int rings, int slices) {
    return GenMeshHemiSphere(radius, rings, slices);
}

__attribute__((visibility("default")))
Mesh raylib_GenMeshCylinder(float radius, float height, int slices) {
    return GenMeshCylinder(radius, height, slices);
}

__attribute__((visibility("default")))
Mesh raylib_GenMeshCone(float radius, float height, int slices) {
    return GenMeshCone(radius, height, slices);
}

__attribute__((visibility("default")))
Mesh raylib_GenMeshTorus(float radius, float size, int radSeg, int sides) {
    return GenMeshTorus(radius, size, radSeg, sides);
}

__attribute__((visibility("default")))
Mesh raylib_GenMeshKnot(float radius, float size, int radSeg, int sides) {
    return GenMeshKnot(radius, size, radSeg, sides);
}

__attribute__((visibility("default")))
Mesh raylib_GenMeshHeightmap(Image heightmap, Vector3 size) {
    return GenMeshHeightmap(heightmap, size);
}

__attribute__((visibility("default")))
Mesh raylib_GenMeshCubicmap(Image cubicmap, Vector3 cubeSize) {
    return GenMeshCubicmap(cubicmap, cubeSize);
}

__attribute__((visibility("default")))
Material * raylib_LoadMaterials(const char * fileName, int * materialCount) {
    return LoadMaterials(fileName, materialCount);
}

__attribute__((visibility("default")))
Material raylib_LoadMaterialDefault(void) {
    return LoadMaterialDefault();
}

__attribute__((visibility("default")))
_Bool raylib_IsMaterialValid(Material material) {
    return IsMaterialValid(material);
}

__attribute__((visibility("default")))
void raylib_UnloadMaterial(Material material) {
    UnloadMaterial(material);
}

__attribute__((visibility("default")))
void raylib_SetMaterialTexture(Material * material, int mapType, Texture2D texture) {
    SetMaterialTexture(material, mapType, texture);
}

__attribute__((visibility("default")))
void raylib_SetModelMeshMaterial(Model * model, int meshId, int materialId) {
    SetModelMeshMaterial(model, meshId, materialId);
}

__attribute__((visibility("default")))
ModelAnimation * raylib_LoadModelAnimations(const char * fileName, int * animCount) {
    return LoadModelAnimations(fileName, animCount);
}

__attribute__((visibility("default")))
void raylib_UpdateModelAnimation(Model model, ModelAnimation anim, float frame) {
    UpdateModelAnimation(model, anim, frame);
}

__attribute__((visibility("default")))
void raylib_UpdateModelAnimationEx(Model model, ModelAnimation animA, float frameA, ModelAnimation animB, float frameB, float blend) {
    UpdateModelAnimationEx(model, animA, frameA, animB, frameB, blend);
}

__attribute__((visibility("default")))
void raylib_UnloadModelAnimations(ModelAnimation * animations, int animCount) {
    UnloadModelAnimations(animations, animCount);
}

__attribute__((visibility("default")))
_Bool raylib_IsModelAnimationValid(Model model, ModelAnimation anim) {
    return IsModelAnimationValid(model, anim);
}

__attribute__((visibility("default")))
_Bool raylib_CheckCollisionSpheres(Vector3 center1, float radius1, Vector3 center2, float radius2) {
    return CheckCollisionSpheres(center1, radius1, center2, radius2);
}

__attribute__((visibility("default")))
_Bool raylib_CheckCollisionBoxes(BoundingBox box1, BoundingBox box2) {
    return CheckCollisionBoxes(box1, box2);
}

__attribute__((visibility("default")))
_Bool raylib_CheckCollisionBoxSphere(BoundingBox box, Vector3 center, float radius) {
    return CheckCollisionBoxSphere(box, center, radius);
}

__attribute__((visibility("default")))
RayCollision raylib_GetRayCollisionSphere(Ray ray, Vector3 center, float radius) {
    return GetRayCollisionSphere(ray, center, radius);
}

__attribute__((visibility("default")))
RayCollision raylib_GetRayCollisionBox(Ray ray, BoundingBox box) {
    return GetRayCollisionBox(ray, box);
}

__attribute__((visibility("default")))
RayCollision raylib_GetRayCollisionMesh(Ray ray, Mesh mesh, Matrix transform) {
    return GetRayCollisionMesh(ray, mesh, transform);
}

__attribute__((visibility("default")))
RayCollision raylib_GetRayCollisionTriangle(Ray ray, Vector3 p1, Vector3 p2, Vector3 p3) {
    return GetRayCollisionTriangle(ray, p1, p2, p3);
}

__attribute__((visibility("default")))
RayCollision raylib_GetRayCollisionQuad(Ray ray, Vector3 p1, Vector3 p2, Vector3 p3, Vector3 p4) {
    return GetRayCollisionQuad(ray, p1, p2, p3, p4);
}

__attribute__((visibility("default")))
void raylib_InitAudioDevice(void) {
    InitAudioDevice();
}

__attribute__((visibility("default")))
void raylib_CloseAudioDevice(void) {
    CloseAudioDevice();
}

__attribute__((visibility("default")))
_Bool raylib_IsAudioDeviceReady(void) {
    return IsAudioDeviceReady();
}

__attribute__((visibility("default")))
void raylib_SetMasterVolume(float volume) {
    SetMasterVolume(volume);
}

__attribute__((visibility("default")))
float raylib_GetMasterVolume(void) {
    return GetMasterVolume();
}

__attribute__((visibility("default")))
Wave raylib_LoadWave(const char * fileName) {
    return LoadWave(fileName);
}

__attribute__((visibility("default")))
Wave raylib_LoadWaveFromMemory(const char * fileType, const unsigned char * fileData, int dataSize) {
    return LoadWaveFromMemory(fileType, fileData, dataSize);
}

__attribute__((visibility("default")))
_Bool raylib_IsWaveValid(Wave wave) {
    return IsWaveValid(wave);
}

__attribute__((visibility("default")))
Sound raylib_LoadSound(const char * fileName) {
    return LoadSound(fileName);
}

__attribute__((visibility("default")))
Sound raylib_LoadSoundFromWave(Wave wave) {
    return LoadSoundFromWave(wave);
}

__attribute__((visibility("default")))
Sound raylib_LoadSoundAlias(Sound source) {
    return LoadSoundAlias(source);
}

__attribute__((visibility("default")))
_Bool raylib_IsSoundValid(Sound sound) {
    return IsSoundValid(sound);
}

__attribute__((visibility("default")))
void raylib_UpdateSound(Sound sound, const void * data, int sampleCount) {
    UpdateSound(sound, data, sampleCount);
}

__attribute__((visibility("default")))
void raylib_UnloadWave(Wave wave) {
    UnloadWave(wave);
}

__attribute__((visibility("default")))
void raylib_UnloadSound(Sound sound) {
    UnloadSound(sound);
}

__attribute__((visibility("default")))
void raylib_UnloadSoundAlias(Sound alias) {
    UnloadSoundAlias(alias);
}

__attribute__((visibility("default")))
_Bool raylib_ExportWave(Wave wave, const char * fileName) {
    return ExportWave(wave, fileName);
}

__attribute__((visibility("default")))
_Bool raylib_ExportWaveAsCode(Wave wave, const char * fileName) {
    return ExportWaveAsCode(wave, fileName);
}

__attribute__((visibility("default")))
void raylib_PlaySound(Sound sound) {
    PlaySound(sound);
}

__attribute__((visibility("default")))
void raylib_StopSound(Sound sound) {
    StopSound(sound);
}

__attribute__((visibility("default")))
void raylib_PauseSound(Sound sound) {
    PauseSound(sound);
}

__attribute__((visibility("default")))
void raylib_ResumeSound(Sound sound) {
    ResumeSound(sound);
}

__attribute__((visibility("default")))
_Bool raylib_IsSoundPlaying(Sound sound) {
    return IsSoundPlaying(sound);
}

__attribute__((visibility("default")))
void raylib_SetSoundVolume(Sound sound, float volume) {
    SetSoundVolume(sound, volume);
}

__attribute__((visibility("default")))
void raylib_SetSoundPitch(Sound sound, float pitch) {
    SetSoundPitch(sound, pitch);
}

__attribute__((visibility("default")))
void raylib_SetSoundPan(Sound sound, float pan) {
    SetSoundPan(sound, pan);
}

__attribute__((visibility("default")))
Wave raylib_WaveCopy(Wave wave) {
    return WaveCopy(wave);
}

__attribute__((visibility("default")))
void raylib_WaveCrop(Wave * wave, int initFrame, int finalFrame) {
    WaveCrop(wave, initFrame, finalFrame);
}

__attribute__((visibility("default")))
void raylib_WaveFormat(Wave * wave, int sampleRate, int sampleSize, int channels) {
    WaveFormat(wave, sampleRate, sampleSize, channels);
}

__attribute__((visibility("default")))
float * raylib_LoadWaveSamples(Wave wave) {
    return LoadWaveSamples(wave);
}

__attribute__((visibility("default")))
void raylib_UnloadWaveSamples(float * samples) {
    UnloadWaveSamples(samples);
}

__attribute__((visibility("default")))
Music raylib_LoadMusicStream(const char * fileName) {
    return LoadMusicStream(fileName);
}

__attribute__((visibility("default")))
Music raylib_LoadMusicStreamFromMemory(const char * fileType, const unsigned char * data, int dataSize) {
    return LoadMusicStreamFromMemory(fileType, data, dataSize);
}

__attribute__((visibility("default")))
_Bool raylib_IsMusicValid(Music music) {
    return IsMusicValid(music);
}

__attribute__((visibility("default")))
void raylib_UnloadMusicStream(Music music) {
    UnloadMusicStream(music);
}

__attribute__((visibility("default")))
void raylib_PlayMusicStream(Music music) {
    PlayMusicStream(music);
}

__attribute__((visibility("default")))
_Bool raylib_IsMusicStreamPlaying(Music music) {
    return IsMusicStreamPlaying(music);
}

__attribute__((visibility("default")))
void raylib_UpdateMusicStream(Music music) {
    UpdateMusicStream(music);
}

__attribute__((visibility("default")))
void raylib_StopMusicStream(Music music) {
    StopMusicStream(music);
}

__attribute__((visibility("default")))
void raylib_PauseMusicStream(Music music) {
    PauseMusicStream(music);
}

__attribute__((visibility("default")))
void raylib_ResumeMusicStream(Music music) {
    ResumeMusicStream(music);
}

__attribute__((visibility("default")))
void raylib_SeekMusicStream(Music music, float position) {
    SeekMusicStream(music, position);
}

__attribute__((visibility("default")))
void raylib_SetMusicVolume(Music music, float volume) {
    SetMusicVolume(music, volume);
}

__attribute__((visibility("default")))
void raylib_SetMusicPitch(Music music, float pitch) {
    SetMusicPitch(music, pitch);
}

__attribute__((visibility("default")))
void raylib_SetMusicPan(Music music, float pan) {
    SetMusicPan(music, pan);
}

__attribute__((visibility("default")))
float raylib_GetMusicTimeLength(Music music) {
    return GetMusicTimeLength(music);
}

__attribute__((visibility("default")))
float raylib_GetMusicTimePlayed(Music music) {
    return GetMusicTimePlayed(music);
}

__attribute__((visibility("default")))
AudioStream raylib_LoadAudioStream(unsigned int sampleRate, unsigned int sampleSize, unsigned int channels) {
    return LoadAudioStream(sampleRate, sampleSize, channels);
}

__attribute__((visibility("default")))
_Bool raylib_IsAudioStreamValid(AudioStream stream) {
    return IsAudioStreamValid(stream);
}

__attribute__((visibility("default")))
void raylib_UnloadAudioStream(AudioStream stream) {
    UnloadAudioStream(stream);
}

__attribute__((visibility("default")))
void raylib_UpdateAudioStream(AudioStream stream, const void * data, int frameCount) {
    UpdateAudioStream(stream, data, frameCount);
}

__attribute__((visibility("default")))
_Bool raylib_IsAudioStreamProcessed(AudioStream stream) {
    return IsAudioStreamProcessed(stream);
}

__attribute__((visibility("default")))
void raylib_PlayAudioStream(AudioStream stream) {
    PlayAudioStream(stream);
}

__attribute__((visibility("default")))
void raylib_PauseAudioStream(AudioStream stream) {
    PauseAudioStream(stream);
}

__attribute__((visibility("default")))
void raylib_ResumeAudioStream(AudioStream stream) {
    ResumeAudioStream(stream);
}

__attribute__((visibility("default")))
_Bool raylib_IsAudioStreamPlaying(AudioStream stream) {
    return IsAudioStreamPlaying(stream);
}

__attribute__((visibility("default")))
void raylib_StopAudioStream(AudioStream stream) {
    StopAudioStream(stream);
}

__attribute__((visibility("default")))
void raylib_SetAudioStreamVolume(AudioStream stream, float volume) {
    SetAudioStreamVolume(stream, volume);
}

__attribute__((visibility("default")))
void raylib_SetAudioStreamPitch(AudioStream stream, float pitch) {
    SetAudioStreamPitch(stream, pitch);
}

__attribute__((visibility("default")))
void raylib_SetAudioStreamPan(AudioStream stream, float pan) {
    SetAudioStreamPan(stream, pan);
}

__attribute__((visibility("default")))
void raylib_SetAudioStreamBufferSizeDefault(int size) {
    SetAudioStreamBufferSizeDefault(size);
}

__attribute__((visibility("default")))
void raylib_SetAudioStreamCallback(AudioStream stream, AudioCallback callback) {
    SetAudioStreamCallback(stream, callback);
}

__attribute__((visibility("default")))
void raylib_AttachAudioStreamProcessor(AudioStream stream, AudioCallback processor) {
    AttachAudioStreamProcessor(stream, processor);
}

__attribute__((visibility("default")))
void raylib_DetachAudioStreamProcessor(AudioStream stream, AudioCallback processor) {
    DetachAudioStreamProcessor(stream, processor);
}

__attribute__((visibility("default")))
void raylib_AttachAudioMixedProcessor(AudioCallback processor) {
    AttachAudioMixedProcessor(processor);
}

__attribute__((visibility("default")))
void raylib_DetachAudioMixedProcessor(AudioCallback processor) {
    DetachAudioMixedProcessor(processor);
}

