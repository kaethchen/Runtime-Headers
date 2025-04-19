@class WFParameter, NSString, WFAction, NSArray;

@interface WFParameterRelationResource : WFResource <WFActionEventObserver>

@property (weak, nonatomic) WFAction *action;
@property (weak, nonatomic) WFParameter *parameter;
@property (readonly, nonatomic) NSString *parameterKey;
@property (readonly, nonatomic) NSArray *comparedValues;
@property (readonly, nonatomic) NSString *relation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)mustBeAvailableForDisplay;

- (void).cxx_destruct;
- (void)action:(id)a0 parameterStateDidChangeForKey:(id)a1;
- (id)initWithParameterKey:(id)a0 parameterValues:(id)a1 relation:(id)a2;
- (void)refreshAvailability;
- (void)setupWithAction:(id)a0 parameter:(id)a1;

@end
