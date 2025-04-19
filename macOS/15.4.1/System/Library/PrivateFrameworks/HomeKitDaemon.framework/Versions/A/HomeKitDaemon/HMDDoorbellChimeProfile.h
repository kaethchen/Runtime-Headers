@class NSString, NSUUID, NSDate;

@interface HMDDoorbellChimeProfile : HMDAccessoryProfile <HMFLogging> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (nonatomic) long long lastChimeMode;
@property (copy, nonatomic) NSDate *lastChimeDate;
@property (copy, nonatomic) NSString *lastPersonIdentificationText;
@property (copy, nonatomic) NSUUID *lastAccessoryUUID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)registerForMessages;
- (id)doorbellMessagePayloadWithChimeMode:(long long)a0 chimeDate:(id)a1 personIdentificationText:(id)a2 accessoryUUID:(id)a3;
- (void)handleDoorbellChimeMessage:(id)a0;
- (id)initWithAppleMediaAccessory:(id)a0;
- (void)sendDoorbellChimeMessageWithChimeMode:(long long)a0 chimeDate:(id)a1 personIdentificationText:(id)a2 accessoryUUID:(id)a3;

@end
