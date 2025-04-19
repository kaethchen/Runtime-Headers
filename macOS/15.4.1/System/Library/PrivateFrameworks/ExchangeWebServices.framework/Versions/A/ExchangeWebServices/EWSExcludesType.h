@class NSString, EWSBasePathToElementType, EWSExcludesValueType;

@interface EWSExcludesType : EWSSearchExpressionType <XSDefinitionProvider>

@property (retain, nonatomic) EWSBasePathToElementType *Path;
@property (retain, nonatomic) EWSExcludesValueType *Bitmask;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)definition;

- (void).cxx_destruct;

@end
