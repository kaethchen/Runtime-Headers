@class NSString, NSMutableDictionary;

@interface HMDThreadAccessoryInfo : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *ipAddress;
@property (nonatomic) BOOL isMatter;
@property (nonatomic) BOOL isBatteryPowered;
@property (nonatomic) BOOL isThreadAccessoryInfoValid;
@property (retain, nonatomic) NSMutableDictionary *threadAccessoryInfo;

- (void).cxx_destruct;
- (id)initWithName:(id)a0 ipAddress:(id)a1 isMatter:(BOOL)a2 isBatteryPowered:(BOOL)a3;

@end
