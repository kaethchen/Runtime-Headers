@interface WorkflowKit.WFDeviceIdiomResource : WFResource {
    void /* unknown type, empty encoding */ requirement;
}

@property (nonatomic, readonly) BOOL isEqual;
@property (nonatomic, readonly) long long idiom;

+ (BOOL)mustBeAvailableForDisplay;

- (id)init;
- (id)initWithDefinition:(id)a0;
- (void)refreshAvailability;

@end
