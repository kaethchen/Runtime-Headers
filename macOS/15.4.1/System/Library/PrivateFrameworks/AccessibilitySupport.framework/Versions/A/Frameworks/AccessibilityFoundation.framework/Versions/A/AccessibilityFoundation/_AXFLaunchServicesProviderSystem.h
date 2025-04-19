@interface _AXFLaunchServicesProviderSystem : _AXFLaunchServicesProvider

@property (nonatomic, setter=_setLSNotificationID:) void *_lsNotificationID;

- (void)_handleNotification:(int)a0 dictionary:(struct __CFDictionary { } *)a1;
- (id)copyRunningApplications;
- (BOOL)isProcessSerialNumberPermittedFrontmost:(struct ProcessSerialNumber { unsigned int x0; unsigned int x1; })a0;
- (struct { struct ProcessSerialNumber { unsigned int x0; unsigned int x1; } x0; struct ProcessSerialNumber { unsigned int x0; unsigned int x1; } x1; })keyboardProcessSerialNumber;
- (id)newApplicationWithProcessSerialNumber:(struct ProcessSerialNumber { unsigned int x0; unsigned int x1; })a0;
- (void)startObservingApplications;
- (void)stopObservingApplications;

@end
