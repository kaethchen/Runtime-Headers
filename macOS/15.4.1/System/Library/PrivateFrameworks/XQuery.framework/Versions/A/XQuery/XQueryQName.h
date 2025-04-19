@class NSString;

@interface XQueryQName : NSObject <XQueryAtomicType, NSCopying> {
    NSString *_namespaceURI;
    NSString *_localPart;
    NSString *_prefixHint;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)parseQNameString:(id)a0 prefixRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a1 localPartRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a2;
+ (void)parseQNameString:(id)a0 toPrefix:(id *)a1 localPart:(id *)a2;
+ (id)qname:(id)a0 forNamespace:(id)a1;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)finalize;
- (BOOL)isEqual:(id)a0;
- (id)XQueryStringValue;
- (id)initWithLocalPart:(id)a0 forNamespace:(id)a1;
- (id)XQueryCastAs:(long long)a0 forContext:(id)a1;
- (long long)XQueryTypeID;
- (id)initWithName:(id)a0 forNamespace:(id)a1;
- (id)localPart;
- (id)namespaceURI;
- (id)prefixHint;

@end
