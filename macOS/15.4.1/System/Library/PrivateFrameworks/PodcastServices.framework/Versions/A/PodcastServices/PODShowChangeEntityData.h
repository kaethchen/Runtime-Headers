@class PODShow, PODShowArtworkChangeEntityData, NSString;

@interface PODShowChangeEntityData : PODContentChangeEntityData <PODSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) PODShow *show;
@property (readonly, nonatomic) PODShowArtworkChangeEntityData *showArtworkData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
