@class NSString;

@interface IFPathAction : NSObject <NSCoding> {
    NSString *_type;
}

+ (void)initialize;
+ (id)types;
+ (BOOL)_recursivelySetupComponent:(id)a0 inPlan:(id)a1 withAction:(id)a2 forParent:(id)a3;
+ (id)actionForNSXMLElement:(id)a0;
+ (BOOL)addActionsToPlan:(id)a0 fromIFPkgComponents:(id)a1 returningSearches:(id *)a2 andError:(id *)a3;
+ (BOOL)addBundleVersionChecksToPlan:(id)a0 forBundleVersionPlist:(id)a1;
+ (id)bundleVersionAction;
+ (BOOL)loadActionsAndComponentsFromNSXMLElement:(id)a0 intoPlan:(id)a1;
+ (id)patchAction;

- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)type;
- (BOOL)canBeUsedOnNode:(id)a0;
- (long long)comparePathActions:(id)a0;
- (BOOL)evaluateActionOnNode:(id)a0 fromPlan:(id)a1 withSearchContext:(id)a2 atTarget:(id)a3 returningError:(id *)a4;
- (id)initWithNSXMLElement:(id)a0;

@end
