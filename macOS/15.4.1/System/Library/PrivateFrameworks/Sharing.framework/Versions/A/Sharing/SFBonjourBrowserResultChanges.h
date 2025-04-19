@class NSObject;
@protocol OS_nw_browse_result;

@interface SFBonjourBrowserResultChanges : NSObject

@property (readonly, nonatomic) NSObject<OS_nw_browse_result> *oldResult;
@property (readonly, nonatomic) NSObject<OS_nw_browse_result> *freshResult;
@property (readonly, nonatomic) unsigned long long change;

- (void).cxx_destruct;
- (id)initWithOldResult:(id)a0 freshResult:(id)a1 change:(unsigned long long)a2;

@end
