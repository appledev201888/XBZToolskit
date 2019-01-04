
#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface XBZToolKitsManage : NSObject

+ (XBZToolKitsManage *)sharedManager;

- (void)XBZToolKitsbegin:(UIView *)view;

- (void)XBZToolKitsend:(UIView *)view;

@end

NS_ASSUME_NONNULL_END
