//
//  JCPullToSelect.h
//  JCPullToSelect-master
//
//  Created by mac on 15/11/12.
//  Copyright © 2015年 HJaycee. All rights reserved.
//

#import "JCHeader.h"
#import "JCBallLayer.h"
#import "JCFooter.h"
#import "UIScrollView+JCPullToSelect.h"

#ifdef DEBUG
#define JCLog(...) NSLog(__VA_ARGS__)
#else
#define JCLog(...)
#endif

#define JCPullToSelectHasDragedBall @"JCPullToSelectHasDragedBall"
#define JCPullToSelectHasDragedBallValue @"1"
#define JCScreenWidth [UIScreen mainScreen].bounds.size.width
#define JCScreenHeight [UIScreen mainScreen].bounds.size.height
#define JCColor(r,g,b) [UIColor colorWithRed:r/255.0 green:g/255.0 blue:b/255.0 alpha:1.0]

// 默认的刷新图片View，可以直接拿来用
#define JCNormalRefreshView [[UIImageView alloc] initWithImage:[UIImage imageNamed:@"JCPullToSelect.bundle/jc_refresh_normal"]]
#define JCSelectedRefreshView [[UIImageView alloc] initWithImage:[UIImage imageNamed:@"JCPullToSelect.bundle/jc_refresh_selected"]]
// 刷新中的遮罩
#define JCRefreshingView [[UIImageView alloc] initWithImage:[UIImage imageNamed:@"JCPullToSelect.bundle/jc_refreshing"]]
// --------------------- 参数设置 ---------------------

// 第一次拖拽弹性球前的提示语，拖动过以后都不会再显示（第一次也不需要显示请设置空内容）
#define JCFirstUseTipText @"继续左右拖动可选择其他功能"
#define JCFirstUseTipTextColor JCColor(57,57,57)
// 默认弹性球颜色
#define JCDefaultBallColor JCColor(51,133,255)
// 上拉刷新文字
#define JCFooterTipReadyText @"上拉加载"
#define JCFooterTipRefreshingText @"正在加载"
#define JCFooterTipTextColor JCColor(57,57,57)
#define JCFooterTipTextFont [UIFont systemFontOfSize:16]
