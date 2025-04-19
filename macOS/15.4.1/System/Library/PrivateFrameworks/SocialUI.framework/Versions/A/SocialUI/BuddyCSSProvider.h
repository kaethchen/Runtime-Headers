@class TranscriptStyleController, NSMutableSet;

@interface BuddyCSSProvider : NSObject

@property (nonatomic) TranscriptStyleController *styleController;
@property (nonatomic, setter=setIconSize:) unsigned int iconSize;
@property (readonly, nonatomic) NSMutableSet *visibleIMHandles;

- (void).cxx_destruct;
- (void)clear;
- (id)_personiconUrlForID:(id)a0 accountGUID:(id)a1 iconSize:(unsigned long long)a2 hostPath:(id)a3;
- (void)_updatePictureForIMHandle:(id)a0 forceRule:(BOOL)a1;
- (void)createRulesForIMHandle:(id)a0;
- (id)initWithTranscriptStyleController:(id)a0;
- (void)updateInfoForIMHandle:(id)a0;
- (void)updateInfoForIMHandle:(id)a0 force:(BOOL)a1;
- (void)updatePictureForIMHandle:(id)a0;

@end
