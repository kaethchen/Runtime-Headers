@class NSObject;
@protocol OS_os_log;

@interface _DASBMMinimumSpanConfiguration : NSObject <NSCopying>

@property (retain, nonatomic) NSObject<OS_os_log> *log;
@property (copy, nonatomic) id /* block */ aggregationKeyBlock;
@property (copy, nonatomic) id /* block */ spanMarkerBlock;
@property (nonatomic) double minimumSpanDuration;

+ (id)configurationWithMinimumDuration:(double)a0 aggregationKey:(id /* block */)a1 spanMarker:(id /* block */)a2;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void).cxx_destruct;
- (id)deriveSpanTuplesWithMinimumDurationOnStream:(id)a0;
- (id)deriveSpansWithMinimumDurationOnStream:(id)a0;
- (id)publisherWithSpansMeetingMinimumDuration:(id)a0;

@end
