@interface ASKTranslator : NSObject

+ (void)load;
+ (id)_alertReplyByTranslatingDescriptor:(id)a0 toType:(id)a1 inSuite:(id)a2;
+ (id)_descriptorByTranslatingDialogReply:(id)a0 ofType:(id)a1 inSuite:(id)a2;
+ (id)_dialogReplyByTranslatingDescriptor:(id)a0 toType:(id)a1 inSuite:(id)a2;
+ (id)_descriptorByTranslatingAlertReply:(id)a0 ofType:(id)a1 inSuite:(id)a2;
+ (id)_descriptorByTranslatingScript:(id)a0 ofType:(id)a1 inSuite:(id)a2;
+ (id)_scriptByTranslatingDescriptor:(id)a0 toType:(id)a1 inSuite:(id)a2;
+ (id)sharedTranslator;

- (id)init;
- (void)_registerTranslations;

@end
