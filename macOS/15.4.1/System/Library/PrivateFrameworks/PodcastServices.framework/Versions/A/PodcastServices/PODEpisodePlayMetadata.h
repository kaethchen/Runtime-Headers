@class NSString, NSDate;

@interface PODEpisodePlayMetadata : NSObject <PODEpisodePlayMetadataProtocol, PODSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long syncID;
@property (readonly, nonatomic) unsigned long long playCount;
@property (readonly, nonatomic) double playheadPosition;
@property (readonly, nonatomic) long long playedStatus;
@property (readonly, nonatomic) NSDate *lastDatePlayed;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
