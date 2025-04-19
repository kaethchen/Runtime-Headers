@class NSString;

@interface IFPathRelocateAction : IFPathAction {
    NSString *_searchID;
}

+ (id)types;

- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)searchID;
- (BOOL)evaluateActionOnNode:(id)a0 fromPlan:(id)a1 withSearchContext:(id)a2 atTarget:(id)a3 returningError:(id *)a4;
- (id)initWithNSXMLElement:(id)a0;
- (id)initWithSearchID:(id)a0;

@end
