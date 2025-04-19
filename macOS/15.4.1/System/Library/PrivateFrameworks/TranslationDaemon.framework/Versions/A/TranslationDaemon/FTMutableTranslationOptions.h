@interface FTMutableTranslationOptions : FTTranslationOptions

@property (nonatomic) BOOL enable_disambiguation_alternatives;
@property (nonatomic) BOOL mask_profanity;
@property (nonatomic) BOOL disable_payload_logging;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;

@end
