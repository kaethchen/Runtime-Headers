@class NSString, NSMutableDictionary, BKDeviceTouchID;
@protocol BiometricKitUIEnrollResultDelegate, MBSecondPartyHost;

@interface BiometricKitUIEnrollViewController : NSViewController <BiometricKitDelegate> {
    NSMutableDictionary *_properties;
}

@property (weak, nonatomic) id<MBSecondPartyHost> secondPartyDelegate;
@property (retain, nonatomic) BKDeviceTouchID *bkDevice;
@property (weak, nonatomic) id<BiometricKitUIEnrollResultDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)propertyForKey:(id)a0;
- (void).cxx_destruct;
- (void)setProperty:(id)a0 forKey:(id)a1;
- (id)templateView;
- (void)cancelEnroll;
- (void)restartEnroll;
- (void)startEnroll;
- (void)startEnrollOperation;

@end
