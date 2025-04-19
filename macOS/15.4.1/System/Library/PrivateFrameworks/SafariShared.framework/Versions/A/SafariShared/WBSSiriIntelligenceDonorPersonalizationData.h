@class NSString;

@interface WBSSiriIntelligenceDonorPersonalizationData : NSObject <NSCopying>

@property (copy, nonatomic) NSString *searchQuery;
@property (nonatomic) unsigned long long position;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)clearData;

@end
