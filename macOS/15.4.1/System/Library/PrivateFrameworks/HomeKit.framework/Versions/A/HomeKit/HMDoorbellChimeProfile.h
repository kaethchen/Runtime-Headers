@class NSString;
@protocol HMDoorbellChimeProfileDelegate;

@interface HMDoorbellChimeProfile : HMAccessoryProfile <_HMDoorbellChimeProfileDelegate, HMFLogging> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (weak) id<HMDoorbellChimeProfileDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)didReceiveDoorbellChimeMessage:(id)a0;
- (id)initWithDoorbellChimeProfile:(id)a0;

@end
