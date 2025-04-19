@class QCStreamManager;

@interface QCStreamExporter : NSObject <QCStreamExporter> {
    QCStreamManager *_manager;
    void *_unused[4];
}

+ (id)exporterForStreamManager:(id)a0;

- (id)description;
- (id)createRepresentationOfType:(id)a0 withProvider:(id)a1 withCount:(unsigned long long)a2 elementSize:(unsigned long long)a3 type:(int)a4 options:(id)a5;
- (id)initWithStreamManager:(id)a0;
- (id)streamManager;
- (id)supportedRepresentationTypes;

@end
