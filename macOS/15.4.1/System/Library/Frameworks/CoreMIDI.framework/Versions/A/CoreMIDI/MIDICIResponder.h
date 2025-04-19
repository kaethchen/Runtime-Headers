@class NSArray, MIDICIDeviceInfo, NSMutableArray;
@protocol MIDICIProfileResponderDelegate, MIDICIPropertyResponderDelegate;

@interface MIDICIResponder : NSObject {
    unsigned int _serverResponderRef;
    NSMutableArray *_subscribers;
    NSMutableArray *_profileStates;
    unsigned int _midiDestination;
    BOOL _propertiesSupported;
    BOOL _isStarted;
}

@property (retain, nonatomic) id<MIDICIPropertyResponderDelegate> propertyDelegate;
@property (readonly, nonatomic) NSArray *initiators;
@property (readonly, retain, nonatomic) id<MIDICIProfileResponderDelegate> profileDelegate;
@property (readonly, nonatomic) MIDICIDeviceInfo *deviceInfo;

+ (id)description;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (BOOL)start;
- (void)stop;
- (BOOL)containsValidChannels:(id)a0;
- (id)getInitiators;
- (id)initWithDeviceInfo:(id)a0 profileDelegate:(id)a1 profileStates:(id)a2 supportProperties:(BOOL)a3;
- (BOOL)notifyProfile:(id)a0 onChannel:(unsigned char)a1 isEnabled:(BOOL)a2;
- (BOOL)notifyProperty:(id)a0 onChannel:(unsigned char)a1 forSubscribers:(id)a2;
- (void)registerProfiles:(id)a0;
- (BOOL)sendProfile:(id)a0 onChannel:(unsigned char)a1 profileData:(id)a2;

@end
