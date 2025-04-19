@class NSData, NSNumber;

@interface HMMTRSoftwareUpdateProviderNotifyUpdateParams : NSObject

@property (readonly) NSData *updateToken;
@property (readonly) NSNumber *softwareVersion;
@property (readonly) NSNumber *linkTypeForMetrics;
@property (readonly) NSNumber *previousSoftwareVersionNumberForMetrics;
@property (readonly) NSNumber *didTimeout;

- (void).cxx_destruct;
- (id)initWithUpdateToken:(id)a0 softwareVersion:(id)a1 didTimeout:(id)a2;
- (id)initWithUpdateToken:(id)a0 softwareVersion:(id)a1 linkTypeForMetrics:(id)a2 previousSoftwareVersionNumberForMetrics:(id)a3 didTimeout:(id)a4;

@end
