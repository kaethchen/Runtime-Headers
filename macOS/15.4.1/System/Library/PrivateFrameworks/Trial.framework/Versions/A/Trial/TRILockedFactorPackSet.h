@class NSString, TRIReferenceManagedDirReaderLock;
@protocol TRIFactorPackSetId;

@interface TRILockedFactorPackSet : NSObject <NSCopying>

@property (readonly, nonatomic) NSString<TRIFactorPackSetId> *factorPackSetId;
@property (readonly, nonatomic) NSString *path;
@property (readonly, nonatomic) TRIReferenceManagedDirReaderLock *lock;

+ (id)lockedSetWithFactorPackSetId:(id)a0 path:(id)a1 lock:(id)a2;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)copyWithReplacementFactorPackSetId:(id)a0;
- (id)copyWithReplacementLock:(id)a0;
- (id)copyWithReplacementPath:(id)a0;
- (id)initWithFactorPackSetId:(id)a0 path:(id)a1 lock:(id)a2;
- (BOOL)isEqualToLockedSet:(id)a0;

@end
