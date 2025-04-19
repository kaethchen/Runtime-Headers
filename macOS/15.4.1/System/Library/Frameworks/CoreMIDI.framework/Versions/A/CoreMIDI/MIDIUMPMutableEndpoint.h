@class NSArray;

@interface MIDIUMPMutableEndpoint : MIDIUMPEndpoint

@property (copy, nonatomic) NSArray *mutableFunctionBlocks;
@property (readonly, nonatomic) BOOL isEnabled;

+ (id)description;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (BOOL)setEnabled:(BOOL)a0 error:(id *)a1;
- (BOOL)registerWithServer;
- (BOOL)changeStreamProtocol:(int)a0;
- (BOOL)deserialize:(id)a0;
- (BOOL)disableFunctionBlock:(id)a0;
- (BOOL)enableFunctionBlock:(id)a0;
- (id)initWithName:(id)a0 deviceInfo:(id)a1 productInstanceID:(id)a2 MIDIProtocol:(int)a3 destinationCallback:(id /* block */)a4;
- (BOOL)registerFunctionBlocks:(id)a0 markAsStatic:(BOOL)a1 error:(id *)a2;
- (id)serializeDescription;
- (BOOL)setName:(id)a0 error:(id *)a1;

@end
