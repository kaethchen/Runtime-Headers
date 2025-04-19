@class XQueryContextInternal;

@interface XQueryContext : NSObject {
    XQueryContextInternal *_internal;
}

+ (id)xqueryContext;
+ (id)xqueryContextWithNamespaces:(id)a0;

- (void)dealloc;
- (void)finalize;
- (id)init;
- (id)evaluateXQuery:(id)a0 constants:(id)a1 contextItem:(id)a2 error:(id *)a3;
- (id)initWithNamespaces:(id)a0;
- (id)_internal;
- (void)_traceValue:(id)a0 forLabel:(id)a1;
- (void)addXQueryProlog:(id)a0;
- (void)contextAddClientSelector:(SEL)a0 forName:(id)a1;
- (id)contextClient;
- (void)contextSetClient:(id)a0;

@end
