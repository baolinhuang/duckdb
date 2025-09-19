/* A Bison parser, made by GNU Bison 3.7.91.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_BASE_YY_THIRD_PARTY_LIBPG_QUERY_GRAMMAR_GRAMMAR_OUT_HPP_INCLUDED
# define YY_BASE_YY_THIRD_PARTY_LIBPG_QUERY_GRAMMAR_GRAMMAR_OUT_HPP_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int base_yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    IDENT = 258,                   /* IDENT  */
    FCONST = 259,                  /* FCONST  */
    SCONST = 260,                  /* SCONST  */
    BCONST = 261,                  /* BCONST  */
    XCONST = 262,                  /* XCONST  */
    Op = 263,                      /* Op  */
    ICONST = 264,                  /* ICONST  */
    PARAM = 265,                   /* PARAM  */
    TYPECAST = 266,                /* TYPECAST  */
    DOT_DOT = 267,                 /* DOT_DOT  */
    COLON_EQUALS = 268,            /* COLON_EQUALS  */
    EQUALS_GREATER = 269,          /* EQUALS_GREATER  */
    INTEGER_DIVISION = 270,        /* INTEGER_DIVISION  */
    POWER_OF = 271,                /* POWER_OF  */
    SINGLE_ARROW = 272,            /* SINGLE_ARROW  */
    DOUBLE_ARROW = 273,            /* DOUBLE_ARROW  */
    SHIFT_RIGHT = 274,             /* SHIFT_RIGHT  */
    SHIFT_LEFT = 275,              /* SHIFT_LEFT  */
    LESS_EQUALS = 276,             /* LESS_EQUALS  */
    GREATER_EQUALS = 277,          /* GREATER_EQUALS  */
    NOT_EQUALS = 278,              /* NOT_EQUALS  */
    NOT_DISTINCT_FROM = 279,       /* NOT_DISTINCT_FROM  */
    ABORT_P = 280,                 /* ABORT_P  */
    ABSOLUTE_P = 281,              /* ABSOLUTE_P  */
    ACCESS = 282,                  /* ACCESS  */
    ACTION = 283,                  /* ACTION  */
    ADD_P = 284,                   /* ADD_P  */
    ADMIN = 285,                   /* ADMIN  */
    AFTER = 286,                   /* AFTER  */
    AGGREGATE = 287,               /* AGGREGATE  */
    ALL = 288,                     /* ALL  */
    ALSO = 289,                    /* ALSO  */
    ALTER = 290,                   /* ALTER  */
    ALWAYS = 291,                  /* ALWAYS  */
    ANALYSE = 292,                 /* ANALYSE  */
    ANALYZE = 293,                 /* ANALYZE  */
    AND = 294,                     /* AND  */
    ANTI = 295,                    /* ANTI  */
    ANY = 296,                     /* ANY  */
    ARRAY = 297,                   /* ARRAY  */
    AS = 298,                      /* AS  */
    ASC_P = 299,                   /* ASC_P  */
    ASOF = 300,                    /* ASOF  */
    ASSERTION = 301,               /* ASSERTION  */
    ASSIGNMENT = 302,              /* ASSIGNMENT  */
    ASYMMETRIC = 303,              /* ASYMMETRIC  */
    AT = 304,                      /* AT  */
    ATTACH = 305,                  /* ATTACH  */
    ATTRIBUTE = 306,               /* ATTRIBUTE  */
    AUTHORIZATION = 307,           /* AUTHORIZATION  */
    BACKWARD = 308,                /* BACKWARD  */
    BEFORE = 309,                  /* BEFORE  */
    BEGIN_P = 310,                 /* BEGIN_P  */
    BETWEEN = 311,                 /* BETWEEN  */
    BIGINT = 312,                  /* BIGINT  */
    BINARY = 313,                  /* BINARY  */
    BIT = 314,                     /* BIT  */
    BOOLEAN_P = 315,               /* BOOLEAN_P  */
    BOTH = 316,                    /* BOTH  */
    BY = 317,                      /* BY  */
    CACHE = 318,                   /* CACHE  */
    CALL_P = 319,                  /* CALL_P  */
    CALLED = 320,                  /* CALLED  */
    CASCADE = 321,                 /* CASCADE  */
    CASCADED = 322,                /* CASCADED  */
    CASE = 323,                    /* CASE  */
    CAST = 324,                    /* CAST  */
    CATALOG_P = 325,               /* CATALOG_P  */
    CENTURIES_P = 326,             /* CENTURIES_P  */
    CENTURY_P = 327,               /* CENTURY_P  */
    CHAIN = 328,                   /* CHAIN  */
    CHAR_P = 329,                  /* CHAR_P  */
    CHARACTER = 330,               /* CHARACTER  */
    CHARACTERISTICS = 331,         /* CHARACTERISTICS  */
    CHECK_P = 332,                 /* CHECK_P  */
    CHECKPOINT = 333,              /* CHECKPOINT  */
    CLASS = 334,                   /* CLASS  */
    CLOSE = 335,                   /* CLOSE  */
    CLUSTER = 336,                 /* CLUSTER  */
    COALESCE = 337,                /* COALESCE  */
    COLLATE = 338,                 /* COLLATE  */
    COLLATION = 339,               /* COLLATION  */
    COLUMN = 340,                  /* COLUMN  */
    COLUMNS = 341,                 /* COLUMNS  */
    COMMENT = 342,                 /* COMMENT  */
    COMMENTS = 343,                /* COMMENTS  */
    COMMIT = 344,                  /* COMMIT  */
    COMMITTED = 345,               /* COMMITTED  */
    COMPRESSION = 346,             /* COMPRESSION  */
    CONCURRENTLY = 347,            /* CONCURRENTLY  */
    CONFIGURATION = 348,           /* CONFIGURATION  */
    CONFLICT = 349,                /* CONFLICT  */
    CONNECTION = 350,              /* CONNECTION  */
    CONSTRAINT = 351,              /* CONSTRAINT  */
    CONSTRAINTS = 352,             /* CONSTRAINTS  */
    CONTENT_P = 353,               /* CONTENT_P  */
    CONTINUE_P = 354,              /* CONTINUE_P  */
    CONVERSION_P = 355,            /* CONVERSION_P  */
    CONVERT = 356,                 /* CONVERT  */
    COPY = 357,                    /* COPY  */
    COST = 358,                    /* COST  */
    CREATE_P = 359,                /* CREATE_P  */
    CROSS = 360,                   /* CROSS  */
    CSV = 361,                     /* CSV  */
    CUBE = 362,                    /* CUBE  */
    CURRENT_P = 363,               /* CURRENT_P  */
    CURSOR = 364,                  /* CURSOR  */
    CYCLE = 365,                   /* CYCLE  */
    DATA_P = 366,                  /* DATA_P  */
    DATABASE = 367,                /* DATABASE  */
    DAY_P = 368,                   /* DAY_P  */
    DAYS_P = 369,                  /* DAYS_P  */
    DEALLOCATE = 370,              /* DEALLOCATE  */
    DEC = 371,                     /* DEC  */
    DECADE_P = 372,                /* DECADE_P  */
    DECADES_P = 373,               /* DECADES_P  */
    DECIMAL_P = 374,               /* DECIMAL_P  */
    DECLARE = 375,                 /* DECLARE  */
    DEFAULT = 376,                 /* DEFAULT  */
    DEFAULTS = 377,                /* DEFAULTS  */
    DEFERRABLE = 378,              /* DEFERRABLE  */
    DEFERRED = 379,                /* DEFERRED  */
    DEFINER = 380,                 /* DEFINER  */
    DELETE_P = 381,                /* DELETE_P  */
    DELIMITER = 382,               /* DELIMITER  */
    DELIMITERS = 383,              /* DELIMITERS  */
    DEPENDS = 384,                 /* DEPENDS  */
    DESC_P = 385,                  /* DESC_P  */
    DESCRIBE = 386,                /* DESCRIBE  */
    DETACH = 387,                  /* DETACH  */
    DICTIONARY = 388,              /* DICTIONARY  */
    DISABLE_P = 389,               /* DISABLE_P  */
    DISCARD = 390,                 /* DISCARD  */
    DISTINCT = 391,                /* DISTINCT  */
    DISTINCTROW = 392,             /* DISTINCTROW  */
    DIV = 393,                     /* DIV  */
    DO = 394,                      /* DO  */
    DOCUMENT_P = 395,              /* DOCUMENT_P  */
    DOMAIN_P = 396,                /* DOMAIN_P  */
    DOUBLE_P = 397,                /* DOUBLE_P  */
    DROP = 398,                    /* DROP  */
    EACH = 399,                    /* EACH  */
    ELSE = 400,                    /* ELSE  */
    ENABLE_P = 401,                /* ENABLE_P  */
    ENCODING = 402,                /* ENCODING  */
    ENCRYPTED = 403,               /* ENCRYPTED  */
    END_P = 404,                   /* END_P  */
    ENUM_P = 405,                  /* ENUM_P  */
    ESCAPE = 406,                  /* ESCAPE  */
    EVENT = 407,                   /* EVENT  */
    EXCEPT = 408,                  /* EXCEPT  */
    EXCLUDE = 409,                 /* EXCLUDE  */
    EXCLUDING = 410,               /* EXCLUDING  */
    EXCLUSIVE = 411,               /* EXCLUSIVE  */
    EXECUTE = 412,                 /* EXECUTE  */
    EXISTS = 413,                  /* EXISTS  */
    EXPLAIN = 414,                 /* EXPLAIN  */
    EXPORT_P = 415,                /* EXPORT_P  */
    EXPORT_STATE = 416,            /* EXPORT_STATE  */
    EXTENSION = 417,               /* EXTENSION  */
    EXTENSIONS = 418,              /* EXTENSIONS  */
    EXTERNAL = 419,                /* EXTERNAL  */
    EXTRACT = 420,                 /* EXTRACT  */
    FALSE_P = 421,                 /* FALSE_P  */
    FAMILY = 422,                  /* FAMILY  */
    FETCH = 423,                   /* FETCH  */
    FILTER = 424,                  /* FILTER  */
    FIRST_P = 425,                 /* FIRST_P  */
    FLOAT_P = 426,                 /* FLOAT_P  */
    FOLLOWING = 427,               /* FOLLOWING  */
    FOR = 428,                     /* FOR  */
    FORCE = 429,                   /* FORCE  */
    FOREIGN = 430,                 /* FOREIGN  */
    FORWARD = 431,                 /* FORWARD  */
    FREEZE = 432,                  /* FREEZE  */
    FROM = 433,                    /* FROM  */
    FULL = 434,                    /* FULL  */
    FUNCTION = 435,                /* FUNCTION  */
    FUNCTIONS = 436,               /* FUNCTIONS  */
    GENERATED = 437,               /* GENERATED  */
    GLOB = 438,                    /* GLOB  */
    GLOBAL = 439,                  /* GLOBAL  */
    GRANT = 440,                   /* GRANT  */
    GRANTED = 441,                 /* GRANTED  */
    GROUP_P = 442,                 /* GROUP_P  */
    GROUPING = 443,                /* GROUPING  */
    GROUPING_ID = 444,             /* GROUPING_ID  */
    GROUPS = 445,                  /* GROUPS  */
    HANDLER = 446,                 /* HANDLER  */
    HAVING = 447,                  /* HAVING  */
    HEADER_P = 448,                /* HEADER_P  */
    HIGH_PRIORITY = 449,           /* HIGH_PRIORITY  */
    HOLD = 450,                    /* HOLD  */
    HOUR_P = 451,                  /* HOUR_P  */
    HOURS_P = 452,                 /* HOURS_P  */
    IDENTITY_P = 453,              /* IDENTITY_P  */
    IF_P = 454,                    /* IF_P  */
    IGNORE_P = 455,                /* IGNORE_P  */
    ILIKE = 456,                   /* ILIKE  */
    IMMEDIATE = 457,               /* IMMEDIATE  */
    IMMUTABLE = 458,               /* IMMUTABLE  */
    IMPLICIT_P = 459,              /* IMPLICIT_P  */
    IMPORT_P = 460,                /* IMPORT_P  */
    IN_P = 461,                    /* IN_P  */
    INCLUDE_P = 462,               /* INCLUDE_P  */
    INCLUDING = 463,               /* INCLUDING  */
    INCREMENT = 464,               /* INCREMENT  */
    INDEX = 465,                   /* INDEX  */
    INDEXES = 466,                 /* INDEXES  */
    INHERIT = 467,                 /* INHERIT  */
    INHERITS = 468,                /* INHERITS  */
    INITIALLY = 469,               /* INITIALLY  */
    INLINE_P = 470,                /* INLINE_P  */
    INNER_P = 471,                 /* INNER_P  */
    INOUT = 472,                   /* INOUT  */
    INPUT_P = 473,                 /* INPUT_P  */
    INSENSITIVE = 474,             /* INSENSITIVE  */
    INSERT = 475,                  /* INSERT  */
    INSTALL = 476,                 /* INSTALL  */
    INSTEAD = 477,                 /* INSTEAD  */
    INT_P = 478,                   /* INT_P  */
    INTEGER = 479,                 /* INTEGER  */
    INTERSECT = 480,               /* INTERSECT  */
    INTERVAL = 481,                /* INTERVAL  */
    INTO = 482,                    /* INTO  */
    INVOKER = 483,                 /* INVOKER  */
    IS = 484,                      /* IS  */
    ISNULL = 485,                  /* ISNULL  */
    ISOLATION = 486,               /* ISOLATION  */
    JOIN = 487,                    /* JOIN  */
    JSON = 488,                    /* JSON  */
    KEY = 489,                     /* KEY  */
    LABEL = 490,                   /* LABEL  */
    LAMBDA = 491,                  /* LAMBDA  */
    LANGUAGE = 492,                /* LANGUAGE  */
    LARGE_P = 493,                 /* LARGE_P  */
    LAST_P = 494,                  /* LAST_P  */
    LATERAL_P = 495,               /* LATERAL_P  */
    LEADING = 496,                 /* LEADING  */
    LEAKPROOF = 497,               /* LEAKPROOF  */
    LEFT = 498,                    /* LEFT  */
    LEVEL = 499,                   /* LEVEL  */
    LIKE = 500,                    /* LIKE  */
    LIMIT = 501,                   /* LIMIT  */
    LISTEN = 502,                  /* LISTEN  */
    LOAD = 503,                    /* LOAD  */
    LOCAL = 504,                   /* LOCAL  */
    LOCATION = 505,                /* LOCATION  */
    LOCK_P = 506,                  /* LOCK_P  */
    LOCKED = 507,                  /* LOCKED  */
    LOGGED = 508,                  /* LOGGED  */
    MACRO = 509,                   /* MACRO  */
    MAP = 510,                     /* MAP  */
    MAPPING = 511,                 /* MAPPING  */
    MATCH = 512,                   /* MATCH  */
    MATERIALIZED = 513,            /* MATERIALIZED  */
    MAXVALUE = 514,                /* MAXVALUE  */
    METHOD = 515,                  /* METHOD  */
    MICROSECOND_P = 516,           /* MICROSECOND_P  */
    MICROSECONDS_P = 517,          /* MICROSECONDS_P  */
    MILLENNIA_P = 518,             /* MILLENNIA_P  */
    MILLENNIUM_P = 519,            /* MILLENNIUM_P  */
    MILLISECOND_P = 520,           /* MILLISECOND_P  */
    MILLISECONDS_P = 521,          /* MILLISECONDS_P  */
    MINUTE_P = 522,                /* MINUTE_P  */
    MINUTES_P = 523,               /* MINUTES_P  */
    MINVALUE = 524,                /* MINVALUE  */
    MOD = 525,                     /* MOD  */
    MODE = 526,                    /* MODE  */
    MONTH_P = 527,                 /* MONTH_P  */
    MONTHS_P = 528,                /* MONTHS_P  */
    MOVE = 529,                    /* MOVE  */
    NAME_P = 530,                  /* NAME_P  */
    NAMES = 531,                   /* NAMES  */
    NATIONAL = 532,                /* NATIONAL  */
    NATURAL = 533,                 /* NATURAL  */
    NCHAR = 534,                   /* NCHAR  */
    NEW = 535,                     /* NEW  */
    NEXT = 536,                    /* NEXT  */
    NO = 537,                      /* NO  */
    NONE = 538,                    /* NONE  */
    NOT = 539,                     /* NOT  */
    NOTHING = 540,                 /* NOTHING  */
    NOTIFY = 541,                  /* NOTIFY  */
    NOTNULL = 542,                 /* NOTNULL  */
    NOWAIT = 543,                  /* NOWAIT  */
    NULL_P = 544,                  /* NULL_P  */
    NULLIF = 545,                  /* NULLIF  */
    NULLS_P = 546,                 /* NULLS_P  */
    NUMERIC = 547,                 /* NUMERIC  */
    OBJECT_P = 548,                /* OBJECT_P  */
    OF = 549,                      /* OF  */
    OFF = 550,                     /* OFF  */
    OFFSET = 551,                  /* OFFSET  */
    OIDS = 552,                    /* OIDS  */
    OLD = 553,                     /* OLD  */
    ON = 554,                      /* ON  */
    ONLY = 555,                    /* ONLY  */
    OPERATOR = 556,                /* OPERATOR  */
    OPTION = 557,                  /* OPTION  */
    OPTIONS = 558,                 /* OPTIONS  */
    OR = 559,                      /* OR  */
    ORDER = 560,                   /* ORDER  */
    ORDINALITY = 561,              /* ORDINALITY  */
    OTHERS = 562,                  /* OTHERS  */
    OUT_P = 563,                   /* OUT_P  */
    OUTER_P = 564,                 /* OUTER_P  */
    OVER = 565,                    /* OVER  */
    OVERLAPS = 566,                /* OVERLAPS  */
    OVERLAY = 567,                 /* OVERLAY  */
    OVERRIDING = 568,              /* OVERRIDING  */
    OWNED = 569,                   /* OWNED  */
    OWNER = 570,                   /* OWNER  */
    PARALLEL = 571,                /* PARALLEL  */
    PARSER = 572,                  /* PARSER  */
    PARTIAL = 573,                 /* PARTIAL  */
    PARTITION = 574,               /* PARTITION  */
    PARTITIONED = 575,             /* PARTITIONED  */
    PASSING = 576,                 /* PASSING  */
    PASSWORD = 577,                /* PASSWORD  */
    PERCENT = 578,                 /* PERCENT  */
    PERSISTENT = 579,              /* PERSISTENT  */
    PIVOT = 580,                   /* PIVOT  */
    PIVOT_LONGER = 581,            /* PIVOT_LONGER  */
    PIVOT_WIDER = 582,             /* PIVOT_WIDER  */
    PLACING = 583,                 /* PLACING  */
    PLANS = 584,                   /* PLANS  */
    POLICY = 585,                  /* POLICY  */
    POSITION = 586,                /* POSITION  */
    POSITIONAL = 587,              /* POSITIONAL  */
    PRAGMA_P = 588,                /* PRAGMA_P  */
    PRECEDING = 589,               /* PRECEDING  */
    PRECISION = 590,               /* PRECISION  */
    PREPARE = 591,                 /* PREPARE  */
    PREPARED = 592,                /* PREPARED  */
    PRESERVE = 593,                /* PRESERVE  */
    PRIMARY = 594,                 /* PRIMARY  */
    PRIOR = 595,                   /* PRIOR  */
    PRIVILEGES = 596,              /* PRIVILEGES  */
    PROCEDURAL = 597,              /* PROCEDURAL  */
    PROCEDURE = 598,               /* PROCEDURE  */
    PROGRAM = 599,                 /* PROGRAM  */
    PUBLICATION = 600,             /* PUBLICATION  */
    QUALIFY = 601,                 /* QUALIFY  */
    QUARTER_P = 602,               /* QUARTER_P  */
    QUARTERS_P = 603,              /* QUARTERS_P  */
    QUOTE = 604,                   /* QUOTE  */
    RANGE = 605,                   /* RANGE  */
    READ_P = 606,                  /* READ_P  */
    REAL = 607,                    /* REAL  */
    REASSIGN = 608,                /* REASSIGN  */
    RECHECK = 609,                 /* RECHECK  */
    RECURSIVE = 610,               /* RECURSIVE  */
    REF = 611,                     /* REF  */
    REFERENCES = 612,              /* REFERENCES  */
    REFERENCING = 613,             /* REFERENCING  */
    REFRESH = 614,                 /* REFRESH  */
    REINDEX = 615,                 /* REINDEX  */
    RELATIVE_P = 616,              /* RELATIVE_P  */
    RELEASE = 617,                 /* RELEASE  */
    RENAME = 618,                  /* RENAME  */
    REPEATABLE = 619,              /* REPEATABLE  */
    REPLACE = 620,                 /* REPLACE  */
    REPLICA = 621,                 /* REPLICA  */
    RESET = 622,                   /* RESET  */
    RESPECT_P = 623,               /* RESPECT_P  */
    RESTART = 624,                 /* RESTART  */
    RESTRICT = 625,                /* RESTRICT  */
    RETURNING = 626,               /* RETURNING  */
    RETURNS = 627,                 /* RETURNS  */
    REVOKE = 628,                  /* REVOKE  */
    RIGHT = 629,                   /* RIGHT  */
    ROLE = 630,                    /* ROLE  */
    ROLLBACK = 631,                /* ROLLBACK  */
    ROLLUP = 632,                  /* ROLLUP  */
    ROW = 633,                     /* ROW  */
    ROWS = 634,                    /* ROWS  */
    RULE = 635,                    /* RULE  */
    SAMPLE = 636,                  /* SAMPLE  */
    SAVEPOINT = 637,               /* SAVEPOINT  */
    SCHEMA = 638,                  /* SCHEMA  */
    SCHEMAS = 639,                 /* SCHEMAS  */
    SCOPE = 640,                   /* SCOPE  */
    SCROLL = 641,                  /* SCROLL  */
    SEARCH = 642,                  /* SEARCH  */
    SECOND_P = 643,                /* SECOND_P  */
    SECONDS_P = 644,               /* SECONDS_P  */
    SECRET = 645,                  /* SECRET  */
    SECURITY = 646,                /* SECURITY  */
    SELECT = 647,                  /* SELECT  */
    SEMI = 648,                    /* SEMI  */
    SEQUENCE = 649,                /* SEQUENCE  */
    SEQUENCES = 650,               /* SEQUENCES  */
    SERIALIZABLE = 651,            /* SERIALIZABLE  */
    SERVER = 652,                  /* SERVER  */
    SESSION = 653,                 /* SESSION  */
    SET = 654,                     /* SET  */
    SETOF = 655,                   /* SETOF  */
    SETS = 656,                    /* SETS  */
    SHARE = 657,                   /* SHARE  */
    SHOW = 658,                    /* SHOW  */
    SIMILAR = 659,                 /* SIMILAR  */
    SIMPLE = 660,                  /* SIMPLE  */
    SKIP = 661,                    /* SKIP  */
    SMALLINT = 662,                /* SMALLINT  */
    SNAPSHOT = 663,                /* SNAPSHOT  */
    SOME = 664,                    /* SOME  */
    SORTED = 665,                  /* SORTED  */
    SQL_P = 666,                   /* SQL_P  */
    SQL_BIG_RESULT = 667,          /* SQL_BIG_RESULT  */
    SQL_BUFFER_RESULT = 668,       /* SQL_BUFFER_RESULT  */
    SQL_CACHE = 669,               /* SQL_CACHE  */
    SQL_CALC_FOUND_ROWS = 670,     /* SQL_CALC_FOUND_ROWS  */
    SQL_NO_CACHE = 671,            /* SQL_NO_CACHE  */
    SQL_SMALL_RESULT = 672,        /* SQL_SMALL_RESULT  */
    STABLE = 673,                  /* STABLE  */
    STANDALONE_P = 674,            /* STANDALONE_P  */
    START = 675,                   /* START  */
    STATEMENT = 676,               /* STATEMENT  */
    STATISTICS = 677,              /* STATISTICS  */
    STDIN = 678,                   /* STDIN  */
    STDOUT = 679,                  /* STDOUT  */
    STORAGE = 680,                 /* STORAGE  */
    STORED = 681,                  /* STORED  */
    STRAIGHT_JOIN = 682,           /* STRAIGHT_JOIN  */
    STRICT_P = 683,                /* STRICT_P  */
    STRIP_P = 684,                 /* STRIP_P  */
    STRUCT = 685,                  /* STRUCT  */
    SUBSCRIPTION = 686,            /* SUBSCRIPTION  */
    SUBSTR = 687,                  /* SUBSTR  */
    SUBSTRING = 688,               /* SUBSTRING  */
    SUMMARIZE = 689,               /* SUMMARIZE  */
    SYMMETRIC = 690,               /* SYMMETRIC  */
    SYSID = 691,                   /* SYSID  */
    SYSTEM_P = 692,                /* SYSTEM_P  */
    TABLE = 693,                   /* TABLE  */
    TABLES = 694,                  /* TABLES  */
    TABLESAMPLE = 695,             /* TABLESAMPLE  */
    TABLESPACE = 696,              /* TABLESPACE  */
    TEMP = 697,                    /* TEMP  */
    TEMPLATE = 698,                /* TEMPLATE  */
    TEMPORARY = 699,               /* TEMPORARY  */
    TEXT_P = 700,                  /* TEXT_P  */
    THEN = 701,                    /* THEN  */
    TIES = 702,                    /* TIES  */
    TIME = 703,                    /* TIME  */
    TIMESTAMP = 704,               /* TIMESTAMP  */
    TIMESTAMPADD = 705,            /* TIMESTAMPADD  */
    TIMESTAMPDIFF = 706,           /* TIMESTAMPDIFF  */
    TO = 707,                      /* TO  */
    TRAILING = 708,                /* TRAILING  */
    TRANSACTION = 709,             /* TRANSACTION  */
    TRANSFORM = 710,               /* TRANSFORM  */
    TREAT = 711,                   /* TREAT  */
    TRIGGER = 712,                 /* TRIGGER  */
    TRIM = 713,                    /* TRIM  */
    TRUE_P = 714,                  /* TRUE_P  */
    TRUNCATE = 715,                /* TRUNCATE  */
    TRUSTED = 716,                 /* TRUSTED  */
    TRY_CAST = 717,                /* TRY_CAST  */
    TYPE_P = 718,                  /* TYPE_P  */
    TYPES_P = 719,                 /* TYPES_P  */
    UNBOUNDED = 720,               /* UNBOUNDED  */
    UNCOMMITTED = 721,             /* UNCOMMITTED  */
    UNENCRYPTED = 722,             /* UNENCRYPTED  */
    UNION = 723,                   /* UNION  */
    UNIQUE = 724,                  /* UNIQUE  */
    UNKNOWN = 725,                 /* UNKNOWN  */
    UNLISTEN = 726,                /* UNLISTEN  */
    UNLOGGED = 727,                /* UNLOGGED  */
    UNPACK = 728,                  /* UNPACK  */
    UNPIVOT = 729,                 /* UNPIVOT  */
    UNTIL = 730,                   /* UNTIL  */
    UPDATE = 731,                  /* UPDATE  */
    USE_P = 732,                   /* USE_P  */
    USER = 733,                    /* USER  */
    USING = 734,                   /* USING  */
    VACUUM = 735,                  /* VACUUM  */
    VALID = 736,                   /* VALID  */
    VALIDATE = 737,                /* VALIDATE  */
    VALIDATOR = 738,               /* VALIDATOR  */
    VALUE_P = 739,                 /* VALUE_P  */
    VALUES = 740,                  /* VALUES  */
    VARCHAR = 741,                 /* VARCHAR  */
    VARIABLE_P = 742,              /* VARIABLE_P  */
    VARIADIC = 743,                /* VARIADIC  */
    VARYING = 744,                 /* VARYING  */
    VERBOSE = 745,                 /* VERBOSE  */
    VERSION_P = 746,               /* VERSION_P  */
    VIEW = 747,                    /* VIEW  */
    VIEWS = 748,                   /* VIEWS  */
    VIRTUAL = 749,                 /* VIRTUAL  */
    VOLATILE = 750,                /* VOLATILE  */
    WEEK_P = 751,                  /* WEEK_P  */
    WEEKS_P = 752,                 /* WEEKS_P  */
    WHEN = 753,                    /* WHEN  */
    WHERE = 754,                   /* WHERE  */
    WHITESPACE_P = 755,            /* WHITESPACE_P  */
    WINDOW = 756,                  /* WINDOW  */
    WITH = 757,                    /* WITH  */
    WITHIN = 758,                  /* WITHIN  */
    WITHOUT = 759,                 /* WITHOUT  */
    WORK = 760,                    /* WORK  */
    WRAPPER = 761,                 /* WRAPPER  */
    WRITE_P = 762,                 /* WRITE_P  */
    XML_P = 763,                   /* XML_P  */
    XMLATTRIBUTES = 764,           /* XMLATTRIBUTES  */
    XMLCONCAT = 765,               /* XMLCONCAT  */
    XMLELEMENT = 766,              /* XMLELEMENT  */
    XMLEXISTS = 767,               /* XMLEXISTS  */
    XMLFOREST = 768,               /* XMLFOREST  */
    XMLNAMESPACES = 769,           /* XMLNAMESPACES  */
    XMLPARSE = 770,                /* XMLPARSE  */
    XMLPI = 771,                   /* XMLPI  */
    XMLROOT = 772,                 /* XMLROOT  */
    XMLSERIALIZE = 773,            /* XMLSERIALIZE  */
    XMLTABLE = 774,                /* XMLTABLE  */
    YEAR_P = 775,                  /* YEAR_P  */
    YEARS_P = 776,                 /* YEARS_P  */
    YES_P = 777,                   /* YES_P  */
    ZONE = 778,                    /* ZONE  */
    NOT_LA = 779,                  /* NOT_LA  */
    NULLS_LA = 780,                /* NULLS_LA  */
    WITH_LA = 781,                 /* WITH_LA  */
    SINGLE_COLON = 782,            /* SINGLE_COLON  */
    CONDITIONLESS_JOIN = 783,      /* CONDITIONLESS_JOIN  */
    POSTFIXOP = 784,               /* POSTFIXOP  */
    UMINUS = 785                   /* UMINUS  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 14 "third_party/libpg_query/grammar/grammar.y"

	core_YYSTYPE		core_yystype;
	/* these fields must match core_YYSTYPE: */
	int					ival;
	char				*str;
	const char			*keyword;
	const char          *conststr;

	char				chr;
	bool				boolean;
	PGJoinType			jtype;
	PGDropBehavior		dbehavior;
	PGOnCommitAction		oncommit;
	PGOnCreateConflict		oncreateconflict;
	PGList				*list;
	PGNode				*node;
	PGValue				*value;
	PGObjectType			objtype;
	PGTypeName			*typnam;
	PGObjectWithArgs		*objwithargs;
	PGDefElem				*defelt;
	PGSortBy				*sortby;
	PGWindowDef			*windef;
	PGJoinExpr			*jexpr;
	PGIndexElem			*ielem;
	PGAlias				*alias;
	PGRangeVar			*range;
	PGIntoClause			*into;
	PGCTEMaterialize			ctematerialize;
	PGWithClause			*with;
	PGInferClause			*infer;
	PGOnConflictClause	*onconflict;
	PGOnConflictActionAlias onconflictshorthand;
	PGAIndices			*aind;
	PGResTarget			*target;
	PGInsertStmt			*istmt;
	PGVariableSetStmt		*vsetstmt;
	PGOverridingKind       override;
	PGSortByDir            sortorder;
	PGSortByNulls          nullorder;
	PGIgnoreNulls          ignorenulls;
	PGConstrType           constr;
	PGLockClauseStrength lockstrength;
	PGLockWaitPolicy lockwaitpolicy;
	PGSubLinkType subquerytype;
	PGViewCheckOption viewcheckoption;
	PGInsertColumnOrder bynameorposition;
	PGLoadInstallType loadinstalltype;
	PGTransactionStmtType transactiontype;

#line 645 "third_party/libpg_query/grammar/grammar_out.hpp"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif

/* Location type.  */
#if ! defined YYLTYPE && ! defined YYLTYPE_IS_DECLARED
typedef struct YYLTYPE YYLTYPE;
struct YYLTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
};
# define YYLTYPE_IS_DECLARED 1
# define YYLTYPE_IS_TRIVIAL 1
#endif




int base_yyparse (core_yyscan_t yyscanner);


#endif /* !YY_BASE_YY_THIRD_PARTY_LIBPG_QUERY_GRAMMAR_GRAMMAR_OUT_HPP_INCLUDED  */
