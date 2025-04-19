@class NSNumber, NSMutableDictionary, NSMutableSet;

@interface CDRecentInfo : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSNumber *version;
@property (retain, nonatomic) NSMutableDictionary *volumes;
@property (retain, nonatomic) NSMutableSet *pushingServices;
@property (retain, nonatomic) NSMutableSet *invalidVolumes;

+ (id)fetchAllowedClassesSet;
+ (id)recentInfoForVolumes:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEmpty;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)log;
- (BOOL)isStale;
- (id)_createNewRecentVolumeInfo;
- (id)_createNewRecentVolumeInfoWithName:(id)a0;
- (id)_recentInfoForVolume:(id)a0 atUrgency:(int)a1 validateResults:(BOOL)a2;
- (id)bsdDiskForVolume:(id)a0;
- (id)copyInvalidsForVolume:(id)a0 atUrgency:(int)a1;
- (id)copyPushingServices;
- (BOOL)hasInvalids;
- (BOOL)hasSnapshotForVolume:(id)a0;
- (id)initWithRecentInfo:(id)a0;
- (id)initWithVolumes:(id)a0;
- (void)invalidateForVolume:(id)a0;
- (BOOL)isInvalidForVolume:(id)a0;
- (BOOL)isStaleForVolume:(id)a0;
- (id)recentInfoForVolume:(id)a0 atUrgency:(int)a1;
- (long long)recentStateForVolume:(id)a0;
- (void)removeServiceInfo:(id)a0;
- (void)removeServiceInfo:(id)a0 forVolume:(id)a1;
- (id)servicesForVolume:(id)a0;
- (id)thresholdsForVolume:(id)a0;
- (BOOL)updateRecentState:(long long)a0 forVolume:(id)a1;
- (BOOL)updateServiceInfoAmount:(id)a0 forService:(id)a1 onVolume:(id)a2 atUrgency:(int)a3 withTimestamp:(double)a4 nonPurgeableAmount:(id)a5 deductFromCurrentAmount:(BOOL)a6 info:(id)a7;
- (BOOL)validateForVolume:(id)a0 andService:(id)a1 atUrgency:(int)a2;

@end
