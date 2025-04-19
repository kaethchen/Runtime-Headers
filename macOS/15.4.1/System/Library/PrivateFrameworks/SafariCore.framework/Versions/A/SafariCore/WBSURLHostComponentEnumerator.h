@class NSString, NSMutableString;

@interface WBSURLHostComponentEnumerator : NSEnumerator {
    NSMutableString *_accumulatorString;
    NSString *_topLevelDomainSubstring;
    unsigned long long _length;
    unsigned long long _numberOfAccummulatedComponents;
    struct _NSRange { unsigned long long location; unsigned long long length; } _nextSearchRange;
    BOOL _didCheckTopLevelDomain;
    BOOL _didFindTopLevelDomain;
    BOOL _didGenerateFullHighLevelDomain;
    BOOL _didBeginConsumingCharacters;
}

@property (readonly, copy, nonatomic) NSString *host;
@property (readonly, nonatomic) unsigned long long options;
@property (readonly, nonatomic) long long kind;
@property (readonly, nonatomic) BOOL containsEmptyComponents;
@property (readonly, nonatomic) BOOL isSpeculative;
@property (readonly, nonatomic) unsigned int ipv4Address;
@property (readonly, nonatomic) struct in6_addr { union { unsigned char __u6_addr8[16]; unsigned short __u6_addr16[8]; unsigned int __u6_addr32[4]; } __u6_addr; } ipv6Address;

- (id)init;
- (void).cxx_destruct;
- (id)nextObject;
- (BOOL)_checkIsIPAddress;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })_nextPointRangeInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 didFindPeriod:(BOOL *)a1;
- (void)clearAccumulatedDomains;
- (id)initWithHost:(id)a0 options:(unsigned long long)a1;

@end
