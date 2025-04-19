@class IDSServerBagConfig;

@interface IDSServerBagValidator : NSObject

@property (retain, nonatomic) IDSServerBagConfig *config;

- (void).cxx_destruct;
- (id)initWithConfig:(id)a0;
- (id)trustedContentsFromRawContents:(id)a0 shouldReport:(BOOL)a1 withError:(id *)a2;

@end
