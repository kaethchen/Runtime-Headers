@class NSString;

@interface BookmarkAccessAPILoggingAssistant : NSObject <FileLockerLogDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedLoggingAssistant;

- (void)fileLocker:(const void *)a0 logPrivacyPreservingString:(const char *)a1 ofType:(unsigned char)a2;

@end
