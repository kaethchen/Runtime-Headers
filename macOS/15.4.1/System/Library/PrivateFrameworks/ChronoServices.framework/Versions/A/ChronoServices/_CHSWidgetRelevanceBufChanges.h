@interface _CHSWidgetRelevanceBufChanges : NSObject {
    unsigned char _changeTypeAttributeKey;
    unsigned int _replacementAttributeKey;
    unsigned char _changeTypeIntentReference;
    unsigned int _replacementIntentReference;
}

- (void)omitAttributeKey;
- (void)omitIntentReference;
- (void)preserveAttributeKey;
- (void)preserveIntentReference;
- (void)replaceAttributeKey:(id)a0;
- (void)replaceIntentReference:(id)a0;

@end
