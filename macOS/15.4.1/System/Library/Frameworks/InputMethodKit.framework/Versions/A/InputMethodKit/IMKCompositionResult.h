@interface IMKCompositionResult : NSObject {
    BOOL _success;
}

@property (readonly, nonatomic, getter=isSuccess) BOOL success;

+ (id)compositionResultWithSuccess:(BOOL)a0;

- (id)initWithSuccess:(BOOL)a0;

@end
