@class NSString, NSMutableDictionary;

@interface IKImageCellReservedIvars : NSObject {
    id _cellParent;
    id _concreteInstance;
    id _cellSource;
    id _proxy;
    unsigned long long _dataSourceIndex;
    NSString *_sourceUID;
    int _lastRenderedSize;
    unsigned char _datasourceParsed : 1;
    unsigned char _datasourceIsVectorial : 1;
    unsigned char _contentCanBePlayed : 1;
    float _alpha;
    NSMutableDictionary *_properties;
}

- (void).cxx_destruct;

@end
