@class NSString, EMFPlayer;

@interface EMFReader : NSObject <MFReader> {
    EMFPlayer *m_player;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithEMFPlayer:(id)a0;
- (int)play:(id)a0;

@end
