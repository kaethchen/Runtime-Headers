@class NSString, NSData;

@interface sec_LWCRFact : NSObject {
    struct Fact { unsigned int type; struct { char *data; unsigned long long length; } name; union { long long integer; struct { char *data; unsigned long long length; } string; struct CEQueryContext *queryContext; } value; } fact;
    NSString *stringFactStorage;
    NSData *dataFactStorage;
}

+ (id)boolFact:(BOOL)a0;
+ (id)dataFact:(id)a0;
+ (id)entitlementsFact:(id)a0;
+ (id)integerFact:(id)a0;
+ (id)stringFact:(id)a0;

- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)bindName:(const char *)a0 withLength:(unsigned long long)a1;

@end
