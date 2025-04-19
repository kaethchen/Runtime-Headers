@class BMStreamBase, NSString, BMSource, BMPruner;

@interface _WBSBiomeStream : NSObject {
    BMStreamBase *_stream;
}

@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) BMSource *source;
@property (readonly, nonatomic) BMPruner *pruner;

- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0;
- (void)_fetchStream;

@end
