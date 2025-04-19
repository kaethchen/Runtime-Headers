@class NSString;

@interface CHSMutableControlActionMetadata : CHSControlActionMetadata

@property (copy, nonatomic) NSString *intentType;
@property (nonatomic) BOOL isLauncher;
@property (nonatomic) BOOL isCameraCapture;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setIntentType:(id)a0;
- (void)setIsCameraCapture:(BOOL)a0;
- (void)setIsLauncher:(BOOL)a0;

@end
