@class OSALanguageInstancePrivate, OSALanguage, NSAppleEventDescriptor;

@interface OSALanguageInstance : NSObject {
    OSALanguageInstancePrivate *_private;
}

@property (readonly) OSALanguage *language;
@property (readonly) struct ComponentInstanceRecord { long long x0[1]; } *componentInstance;
@property (retain) NSAppleEventDescriptor *defaultTarget;

+ (id)languageInstanceWithLanguage:(id)a0;

- (void)dealloc;
- (id)initWithLanguage:(id)a0;
- (id)richTextFromDescriptor:(id)a0;
- (id)initSharedInstanceWithLanguage:(id)a0;
- (void)_setComponentDefaultTarget:(id)a0;

@end
