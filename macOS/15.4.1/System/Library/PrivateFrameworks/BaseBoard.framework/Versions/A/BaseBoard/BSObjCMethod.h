@class NSString, BSObjCValue, NSArray;

@interface BSObjCMethod : NSObject <BSDescriptionProviding> {
    long long _required;
}

@property (readonly, copy, nonatomic) NSString *encoding;
@property (readonly, nonatomic) SEL selector;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, retain, nonatomic) BSObjCValue *returnValue;
@property (readonly, retain, nonatomic) NSArray *arguments;
@property (readonly, retain, nonatomic) BSObjCValue *firstArgument;
@property (readonly, retain, nonatomic) BSObjCValue *lastArgument;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)copyAsOnewayVoid;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end
