@class NSString;

@interface XQueryPrologItemInheritNamespaces : NSObject <XQueryPrologItemBehavior> {
    BOOL value;
    long long line;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)inherit:(BOOL)a0 atLine:(long long)a1;

- (void)XQueryUpdateProlog:(id)a0;

@end
