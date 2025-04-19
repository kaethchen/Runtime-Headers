@class NSUUID, NSString;
@protocol LACRemoteContextOwnership;

@interface RemoteContext : NSObject <LACRemoteContextOwnership> {
    NSString *_description;
}

@property (readonly, nonatomic) NSUUID *uuid;
@property (readonly, nonatomic) id<LACRemoteContextOwnership> ownership;
@property (nonatomic) unsigned long long acmExternalizedFormHash;
@property (readonly, nonatomic) RemoteContext *originalOwnership;

- (void)dealloc;
- (id)description;
- (void).cxx_destruct;
- (id)initWithOwnership:(id)a0 uuid:(id)a1 description:(id)a2 originalOwnership:(id)a3;

@end
