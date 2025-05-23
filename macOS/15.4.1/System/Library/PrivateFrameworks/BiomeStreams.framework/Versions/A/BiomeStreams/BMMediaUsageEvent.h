@class NSURL, NSString, NSDateInterval;

@interface BMMediaUsageEvent : BMEventBase <BMEventBinaryStepping, BMEventTimeElapsing, BMEventAppAssociating>

@property (copy, nonatomic) NSURL *URL;
@property (copy, nonatomic) NSURL *mediaURL;
@property (nonatomic, getter=isUsageTrusted) BOOL usageTrusted;
@property (copy, nonatomic) NSString *safariProfileID;
@property (nonatomic, getter=isStarting) BOOL starting;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSDateInterval *dateInterval;
@property (nonatomic) double absoluteTimestamp;
@property (nonatomic) double duration;
@property (copy, nonatomic) NSString *bundleID;

+ (id)new;

- (id)init;
- (void).cxx_destruct;
- (id)initWithBegin:(BOOL)a0 bundleID:(id)a1 URL:(id)a2 mediaURL:(id)a3 timestamp:(id)a4;
- (id)initWithBegin:(BOOL)a0 bundleID:(id)a1 URL:(id)a2 mediaURL:(id)a3 usageTrusted:(BOOL)a4 timestamp:(id)a5;
- (id)initWithBegin:(BOOL)a0 bundleID:(id)a1 URL:(id)a2 mediaURL:(id)a3 usageTrusted:(BOOL)a4 timestamp:(id)a5 safariProfileID:(id)a6;
- (BOOL)isValidWithContext:(id)a0 error:(id *)a1;

@end
