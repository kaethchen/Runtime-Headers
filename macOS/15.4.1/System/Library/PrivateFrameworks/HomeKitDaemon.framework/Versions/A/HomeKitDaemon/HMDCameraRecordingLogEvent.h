@class NSUUID;

@interface HMDCameraRecordingLogEvent : HMMLogEvent

@property (readonly, copy) NSUUID *sessionID;
@property unsigned long long sequenceNumber;
@property (readonly, copy) NSUUID *ephemeralCameraID;
@property (readonly, copy) NSUUID *cameraID;

- (void).cxx_destruct;
- (id)attributeDescriptions;
- (id)initWithSessionID:(id)a0 cameraID:(id)a1 sequenceNumber:(unsigned long long)a2;

@end
