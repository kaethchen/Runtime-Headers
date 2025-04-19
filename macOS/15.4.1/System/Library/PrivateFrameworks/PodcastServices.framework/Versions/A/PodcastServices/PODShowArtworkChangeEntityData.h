@class PODArtwork, PODShow, NSString;

@interface PODShowArtworkChangeEntityData : PODContentChangeEntityData <PODSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) PODArtwork *artwork;
@property (readonly, nonatomic) PODShow *show;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
