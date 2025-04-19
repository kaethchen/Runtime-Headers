@interface PKRecognitionSessionManagerConfiguration : NSObject

@property (nonatomic) BOOL sessionCaching;
@property (nonatomic) BOOL smartSelectionQuery;

+ (id)defaultConfiguration;
+ (id)backgroundIndexingConfiguration;
+ (id)interactiveCanvasConfiguration;

- (id)init;

@end
