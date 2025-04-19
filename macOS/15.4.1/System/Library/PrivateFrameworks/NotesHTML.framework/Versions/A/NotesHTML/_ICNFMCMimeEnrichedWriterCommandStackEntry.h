@class NSString;

@interface _ICNFMCMimeEnrichedWriterCommandStackEntry : NSObject

@property (weak, nonatomic) NSString *command;
@property (nonatomic) unsigned long long attrStringIndex;
@property (retain, nonatomic) id parameter;
@property (retain, nonatomic) _ICNFMCMimeEnrichedWriterCommandStackEntry *parent;

- (id)init;
- (void).cxx_destruct;

@end
