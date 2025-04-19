@class PODEpisode, PODShow, NSString;

@interface PODEpisodeChangeEntityData : PODContentChangeEntityData <PODSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) PODEpisode *episode;
@property (readonly, nonatomic) PODShow *show;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
