@class NSData, NSURL, NSString;

@interface ECBIMIInfo : NSObject {
    unsigned long long _hash;
}

@property (readonly, copy, nonatomic) NSData *indicator;
@property (readonly, nonatomic) NSURL *location;
@property (readonly, nonatomic) NSURL *evidenceLocation;
@property (readonly, nonatomic) NSString *indicatorHash;
@property (readonly, nonatomic) NSString *hashAlgorithm;

+ (id)bimiInfoForHeaders:(id)a0;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithIndicator:(id)a0 location:(id)a1 evidenceLocation:(id)a2 indicatorHash:(id)a3 hashAlgorithm:(id)a4;

@end
