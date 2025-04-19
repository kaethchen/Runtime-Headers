@class NSArray, NSMutableArray, NSString;

@interface SCRCArgumentSubcommand : NSObject

@property (retain, nonatomic) NSMutableArray *_optionMutableArray;
@property (readonly, copy, nonatomic) NSArray *optionArray;
@property (copy, nonatomic) NSString *subcommandName;

+ (id)subcommandWithName:(id)a0;

- (id)description;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (int)run;
- (void).cxx_destruct;
- (long long)compare:(id)a0;
- (id)initWithName:(id)a0;
- (void)stop;
- (void)showHelp;
- (void)addOption:(char)a0 argument:(id)a1 target:(id)a2 action:(SEL)a3 argumentDescription:(id)a4 required:(BOOL)a5;
- (id)formattedHelpFooter;
- (id)formattedHelpHeader;
- (void)stopDueToSigTerm;

@end
